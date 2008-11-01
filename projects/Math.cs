using System;
using System.Runtime.CompilerServices;
using System.Reflection;

[assembly:AssemblyVersionAttribute("1.0.0.0")]

public class Math
{

    public String GetResult(int arg1, Char op, int arg2)
    {
        switch (op)
        {
            case '+':
                return String.Format("Result: {0:####}", arg1 + arg2);
            case '-':
                return String.Format("Result: {0:####}", arg1 - arg2);
            case '*':
                return String.Format("Result: {0:####}", arg1 * arg2);
            case '/':
                return String.Format("Result: {0:####}", arg1 / arg2);
            default:
                return "Invalid operator: " + op;
        }
    }

    public static void Main(string[] args)
    {

        while (true)
        {
            Console.WriteLine("Enter a simple formula. Ex: 4+4: (or q to quit)");
            String formula = Console.ReadLine();

            if (formula == "q" || formula == "Q") break;

            // parse the formula and get the arguments
            Parser p = new Parser();
            try
            {
                Arguments a = p.Parse(formula);
                // do the calc and print the results
                Math m = new Math();
                Console.WriteLine(m.GetResult(Convert.ToInt32(a.Arg1), a.Op, Convert.ToInt32(a.Arg2)));
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }
        }
    }
}

public class Arguments
{
    private String m_arg1;
    private Char m_op;
    private String m_arg2;

    public String Arg1
    {
        get
        {
            return m_arg1;
        }
        set
        {
            m_arg1 = value;
            return;
        }
    }

    public Char Op
    {
        get
        {
            return m_op;
        }
        set
        {
            m_op = value;
            return;
        }
    }

    public String Arg2
    {
        get
        {
            return m_arg2;
        }
        set
        {
            m_arg2 = value;
            return;
        }
    }
}

public class Parser
{
    public Arguments Parse(String formula)
    {
        Arguments args = new Arguments();

        // get the first arg
        char[] opsAndSpace = { ' ', '+', '-', '*', '/' };

        int pos = formula.IndexOfAny(opsAndSpace);
        args.Arg1 = formula.Substring(0, pos);
        args.Arg2 = args.Arg1;

        // skip whitespace to get to the operator
        while (formula[pos] == ' ')
        {
            pos++;
        }

        // get the operator
        args.Op = Convert.ToChar(formula.Substring(pos, 1));

        // skip whitespace to get to the second arg
        pos++;
        while (formula[pos] == ' ')
        {
            pos++;
        }

        // get the second arg
        args.Arg2 = formula.Substring(pos);

        return args;
    }
}
  