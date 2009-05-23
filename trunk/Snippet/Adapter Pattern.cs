public class Fork

{

    public void Poke(String food)

    {

        Console.WriteLine("Poking "  + food +  " with " + this.GetType());

    }

}

 

public class Spoon

{

    public virtual void Scoop(String food)

    {

        Console.WriteLine("Scooping " + food +" with " + this.GetType());

    }

}

 

public class SporkAdapter: Spoon

{

    public SporkAdapter(Fork fork)

    {

        Fork = fork;

    }

 

    private Fork Fork { get; set; }

 

    public override void Scoop(string food)

    {

        Fork.Poke(food);

    }

}

 

class Program

{

    static void Main(string[] args)

    {

        Fork fork = new Fork();

        Spoon spoon = new Spoon();

 

        List<Spoon> spoons = new List<Spoon>();

 

        spoons.Add(spoon);

        spoons.Add(new SporkAdapter(fork));

 

        foreach(Spoon s in spoons)

            s.Scoop("Soup");

 

        Console.Read();

    }

}