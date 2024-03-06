// https://www.codingninjas.com/studio/problems/binary-number-triangle_6581890

void nBinaryTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int start;
        (i % 2 == 0) ? start = 0 : start = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}