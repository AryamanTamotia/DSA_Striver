// https://www.codingninjas.com/studio/problems/count-digits_8416387

int countDigits(int n)
{
	int cnt = 0;
	int dup = n;
	while (n > 0)
	{
		int last = n % 10;
		if (last != 0 && dup % last == 0)
			cnt++;
		n = n / 10;
	}
	return cnt;
}