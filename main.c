int fib(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int n1 = 0, n2 = 1;

        int nextTerm = n1 + n2;
        for (int i = 3; i <= n; ++i)
        {
            n1 = n2;
            n2 = nextTerm;
            nextTerm = n1 + n2;
        }
        return nextTerm;
    }
}