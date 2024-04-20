// https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

long long fact(int i)
{
    if (i == 1)
        return 1;
    if (i == 0)
        return 0;
    return i * fact(i - 1);
}

vector<long long> factorialNumbers(long long n)
{
    vector<long long> vc;
    for (int i = 1; i <= n; i++)
    {
        long long summ = fact(i);
        if (summ <= n)
            vc.push_back(summ);
        else
            break;
    }
    return vc;
}