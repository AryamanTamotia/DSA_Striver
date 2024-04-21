// https://www.codingninjas.com/studio/problems/print-fibonacci-series_7421617?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

long long fib(int i)
{
    if (i == 1)
        return 1;
    if (i == 0)
        return 0;
    return fib(i - 1) + fib(i - 2);
}

vector<long long> generateFibonacciNumbers(long long n)
{
    vector<long long> vc;
    for (int i = 0; i < n; i++)
    {
        long long summ = fib(i);
        vc.push_back(summ);
    }
    return vc;
}