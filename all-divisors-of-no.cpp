void print_divisors(int n)
{
    // Code here.
    int i;
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    for (i = i - 1; i >= 1; i--)
    {
        if (n % i == 0 && i != n / i)
        {
            cout << n / i << " ";
        }
    }
}