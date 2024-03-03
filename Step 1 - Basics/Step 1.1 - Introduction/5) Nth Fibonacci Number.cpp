// https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156

#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin >> n;

        int fib[n];

        fib[0] = 1;
        fib[1] = 1;
        if (n == 1 || n == 2)
        {
                cout << 1;
        }
        else
        {
                for (int i = 2; i < n; i++)
                {
                        fib[i] = fib[i - 1] + fib[i - 2];
                }
                cout << fib[n - 1] << endl;
        }
}
