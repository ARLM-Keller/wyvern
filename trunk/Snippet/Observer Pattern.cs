public class Parent

{

    public String Name { get; set; }

 

    public void OnChildCry(Child c)

    {

        Console.WriteLine(this.Name + " heard " + c.Name + " cry");

    }

}

 

public class Child

{

    public Child()

    {

        Parents = new List<Parent>();

    }

    public String Name { get; set; }

 

    public List<Parent> Parents { get; set; }

 

    public void Cry()

    {

        foreach(Parent p in Parents)

            p.OnChildCry(this);

    }

}

 

class Program

{

    static void Main(string[] args)

    {

        Parent Ralph = new Parent { Name = "Ralph" };

        Child Billy = new Child { Name = "Billy" };

        Parent Mary = new Parent { Name = "Mary" };

 

        Billy.Parents.Add(Ralph);

        Billy.Parents.Add(Mary);

 

        Billy.Cry();

 

        Console.Read();

    }

}