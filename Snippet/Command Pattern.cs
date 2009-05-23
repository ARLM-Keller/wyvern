public class WriteToConsoleCommand

{

    public void Execute()

    {

        Console.WriteLine("Write To Command Line");

    }

}

 

class Program

{

    static void Main(string[] args)

    {

        WriteToConsoleCommand command = new WriteToConsoleCommand();

 

        Console.WriteLine("Starting");

 

        command.Execute();

 

        Thread.Sleep(500);

 

        command.Execute();

 

        Console.Read();

    }

}