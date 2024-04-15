// https://www.codingninjas.com/studio/problems/check-armstrong_589

bool checkArmstrong(int n)
{
	if (n < 0)
		return false;
	int sum = 0;
	int dup = n;
	int p = floor(log10(n)) + 1;
	while (n > 0)
	{
		int dig = n % 10;
		sum += pow(dig, p);
		n = n / 10;
	}
	if (sum == dup)
		return true;
	return false;
}
