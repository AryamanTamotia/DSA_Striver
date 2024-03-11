// https://www.codingninjas.com/studio/problems/reverse-letter-triangle_6581906

void nLetterTriangle(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (char ch = 'A'; ch <= 'A' + i - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}