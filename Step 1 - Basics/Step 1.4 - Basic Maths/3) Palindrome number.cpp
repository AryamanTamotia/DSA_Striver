// https://www.codingninjas.com/studio/problems/palindrome-number_624662

bool palindrome(int x)
{
    if (x < 0)
        return false;
    long dup = x;
    long rev = 0;
    while (x > 0)
    {
        long last = x % 10;
        rev = rev * 10 + last;
        x = x / 10;
    }
    if (rev == dup)
        return true;
    return false;
}