// https://www.codingninjas.com/studio/problems/alpha-hill_6581921

void alphaHill(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << ch << " ";
            (j <= ((2 * i - 1) / 2)) ? ch++ : ch--;
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}