// https://www.codingninjas.com/studio/problems/increasing-letter-triangle_6581897

void nLetterTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}