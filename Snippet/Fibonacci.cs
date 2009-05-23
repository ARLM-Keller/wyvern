public int Fibonacci(int x)

{

    var previousValue = -1;

    var currentResult = 1;

 

    for (var i = 0; i <= x; ++i)

    {

        var sum = currentResult + previousValue;

        previousValue = currentResult;

        currentResult = sum;

    }

 

    return currentResult;

}