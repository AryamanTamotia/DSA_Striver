// https://www.codingninjas.com/studio/problems/rotated-triangle_6573688

void nStarTriangle(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars;
        (i > n) ? stars = 2 *n - i : stars = i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}