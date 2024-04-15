// https://www.codingninjas.com/studio/problems/check-prime_624934

bool isPrime(int n)
{
	if (n == 1)
		return false;
	int cnt = 0;
	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			cnt++;
			if (n / i != i)
				cnt++;
		}
	}
	if (cnt <= 2)
		return true;
	return false;
}
