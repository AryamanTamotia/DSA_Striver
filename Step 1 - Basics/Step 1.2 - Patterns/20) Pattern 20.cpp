// https : // www.codingninjas.com/studio/problems/symmetry_6581914

void symmetry(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars, spaces;
        if (i > n)
        {
            stars = 2 * n - i;
            spaces = (i - n) * 2;
        }
        else
        {
            stars = i;
            spaces = 2 * n - 2 * i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}