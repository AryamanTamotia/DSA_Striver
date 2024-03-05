// https://www.codingninjas.com/studio/problems/reverse-star-triangle_6573685

void nStarTriangle(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i - 1; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * n - 2 * (i - 1) - 1; j++)
		{
			cout << "*";
		}
		for (int j = 1; j <= i - 1; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
}