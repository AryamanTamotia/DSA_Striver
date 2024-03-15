// https://www.codingninjas.com/studio/problems/ninja-and-the-number-pattern-i_6581959

void getNumberPattern(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int left = j - 1;
            int top = i - 1;
            int right = 2 * n - 1 - j;
            int bottom = 2 * n - 1 - i;
            cout << n - min(min(left, top), min(right, bottom));
        }
        cout << endl;
    }
}