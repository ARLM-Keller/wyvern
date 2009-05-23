static bool IsLeapYear(int year)
{
        if(year&3) return 0;
        if(year%100) return 1;
        if(year%400) return 0;
        return 1;
}
