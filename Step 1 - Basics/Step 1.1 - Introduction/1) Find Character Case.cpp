// https://www.codingninjas.com/studio/problems/find-character-case_58513

#include <bits/stdc++.h>
using namespace std;

int main()
{
	char n;
	cin >> n;
	(isalpha(n)) ? ((isupper(n)) ? cout << 1 : cout << 0) : cout << -1;
}
