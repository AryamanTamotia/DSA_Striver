// https://www.codingninjas.com/studio/problems/n-2-forest_6570178

void nForest(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
