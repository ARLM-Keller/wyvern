public class DisplayNameGetter

{

    public virtual String GetDisplayName(Person p)

    {

        return p.FirstName + " " + p.LastName;

    }

}

 

public class FormalDisplayNameGetter:DisplayNameGetter

{

    public override string GetDisplayName(Person p)

    {

        return p.Prefix + " "  + p.LastName;

    }

 

}

 

public class Person

{

    public Person()

    {

        DisplayNameStrategy = new DisplayNameGetter();

    }

 

    public DisplayNameGetter DisplayNameStrategy { get; set; }

 

    public String FirstName { get; set; }

    public String LastName { get; set; }

    public String Prefix { get; set; }

 

    public String DisplayName

    {

        get

        {

            return DisplayNameStrategy.GetDisplayName(this);

        }

    }

}

 

class Program

{

    static void Main(string[] args)

    {

        Person

            pete = new Person { Prefix = "Mr.", FirstName = "Peter", LastName = "Piper" };

 

        Console.WriteLine(pete.DisplayName);

 

        pete.DisplayNameStrategy = new FormalDisplayNameGetter();

 

        Console.WriteLine(pete.DisplayName);

 

        Console.ReadLine();

    }

}