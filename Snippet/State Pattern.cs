public class FormalNameGetter:DisplayNameGetter

{

    public override string GetDisplayName(Person p)

    {

        return p.Prefix + " " + p.LastName;

    }

}

 

public class DisplayNameGetter

{

    public virtual String GetDisplayName(Person p)

    {

        return p.FirstName + " " + p.LastName;

    }

}

public class Person

{

    public String FirstName { get; set; }

    public String LastName { get; set; }

    public String Prefix { get; set; }

    private Int32 m_Age;

    public Int32 Age

    {

        get

        {

            return m_Age;

        }

        set

        {

            m_Age = value;

 

            if (m_Age < 16)

                State = new DisplayNameGetter();

            else

                State = new FormalNameGetter();

        }

    }

 

    private DisplayNameGetter State { get; set; }

 

    public String DisplayName

    {

        get

        {

            return State.GetDisplayName(this);

        }

    }

}

 

class Program

{

    static void Main(string[] args)

    {

        Person

            pete = new Person { Prefix = "Mr.", FirstName = "Peter", LastName = "Piper", Age=12 };

 

        Console.WriteLine(pete.DisplayName);

 

        pete.Age = 20;

 

        Console.WriteLine(pete.DisplayName);

 

        Console.ReadLine();

    }

}