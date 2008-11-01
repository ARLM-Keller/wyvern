using System;
using System.Collections.Generic;
using System.Threading;

 class ThreadSafe
{
    static List<string> list = new List<string>();

    //public static void Main()
    //{
    //    Thread t = new Thread(AddItems);
    //    t.Start();
    //    new Thread(AddItems).Start();
    //}

    static void AddItems()
    {
        for (int i = 0; i < 100; i++)
            lock (list)
                list.Add("Item " + list.Count);

        string[] items = list.ToArray();
        //lock (list) items = list.ToArray();
        foreach (string s in items) Console.Write("{0}\t", s);
    }
}

 class ProducerConsumerQueue : IDisposable
 {
     EventWaitHandle wh = new AutoResetEvent(false);
     Thread worker;
     object locker = new object();
     Queue<string> tasks = new Queue<string>();

     public ProducerConsumerQueue()
     {
         worker = new Thread(Work);
         worker.Start();
     }

     public void EnqueueTask(string task)
     {
         lock (locker) tasks.Enqueue(task);
         wh.Set();
     }

     public void Dispose()
     {
         EnqueueTask(null);     // Signal the consumer to exit.
         worker.Join();          // Wait for the consumer's thread to finish.
         wh.Close();             // Release any OS resources.
     }

     void Work()
     {
         while (true)
         {
             string task = null;
             lock (locker)
                 if (tasks.Count > 0)
                 {
                     task = tasks.Dequeue();
                     if (task == null) return;
                 }
             if (task != null)
             {
                 Console.WriteLine("Performing task: " + task);
                 Thread.Sleep(100);  // simulate work...
             }
             else
                 wh.WaitOne();         // No more tasks - wait for a signal
         }
     }
 }

 class Test
 {
     static void Main()
     {
         using (ProducerConsumerQueue q = new ProducerConsumerQueue())
         {
             q.EnqueueTask("Hello");
             for (int i = 0; i < 10; i++) q.EnqueueTask("Say " + i);
             q.EnqueueTask("Goodbye!");
         }
         // Exiting the using statement calls q's Dispose method, which
         // enqueues a null task and waits until the consumer finishes.
     }
 }
