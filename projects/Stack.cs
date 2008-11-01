namespace Stack
{
    using System;
    //using System.ServiceModel.Syndication;
    //using System.Xml;
    using System.Threading;
    using System.Data.Linq;

    public class Stack
    {
        private Node first { get; set; }

        /******************************************************************************************************************
        Property Procedures do not accept any parameters. Note the diff in the function definition (no parenthesis)
        *******************************************************************************************************************/

        public bool Empty
        {
            /*******************************************
            Property Get Procedure
            ********************************************/
            get
            {
                return (first == null);
            }
        }

        public int Count
        {
            /*******************************************
            Property Get Procedure
            ********************************************/
            get;
            private set;
        }

        public object Pop()
        {
            if (first == null)
            {
                throw new InvalidOperationException("Cant pop from an empty stack");
            }
            else
            {
                object temp = first.Value;
                first = first.Next;
                Count--;
                return temp;
            }
        }

        public void Push(object o)
        {
            first = new Node(o, first);
            Count++;
        }

        public object Peek()
        {
            if (null == first) return "The stack is empty...";
            return first.Value;
        }

        class Node
        {
            public Node(object value) : this(value, null) { }

            public Node(object value, Node next)
            {
                Next = next;
                Value = value;
            }

            public Node Next { get; set; }

            public object Value { get; set; }

        }
        
        class StackTest
        {
            delegate void PO();
            delegate string DE(int a, int b);

            static event PO poe;
            static void Fun1()
            {
                Console.WriteLine("Fun1 called");
            }

            static void Fun2()
            {
                Console.WriteLine("Fun2 called");
            }

            static void Fun3(string str, DE de)
            {
                Console.WriteLine(str+de(123,456));
            }
            struct Run
            {
                static void Main()
                    {
                        Stack s = new Stack();

                        if (s.Empty)
                            Console.WriteLine("Stack is Empty");
                        else
                            Console.WriteLine("Stack is not Empty");

                        for (int i = 0; i < 5; i++)
                            s.Push(i);

                        Console.WriteLine("Items in Stack {0}", s.Count);

                        for (int i = 0; i < 5; i++)
                        {
                            Console.WriteLine("Popped Item is {0} and the count is {1}", s.Pop(), s.Count);
                            Console.WriteLine("Peeked item is {0} and the count is {1}", s.Peek(), s.Count);
                        }

                        s = null;

                        poe += new PO(Fun1);
                        poe += new PO(Fun2);
                        poe();
                        Fun3("Hello", delegate(int a, int b) { a = a + b; return a.ToString(); });

                        //// read an ATOM feed
                        //SyndicationFeed feed = SyndicationFeed.Load(XmlReader.Create("http://blogs.msdn.com/MainFeed.aspx"));
                        //XmlWriter writer = XmlWriter.Create(Console.Out, null);

                        //// write it to the Console
                        //feed.GetRss20Formatter().WriteTo(writer);
                        //writer.Flush();

                    }
            }
            
        }
    }
}