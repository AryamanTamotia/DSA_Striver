// https://www.codingninjas.com/studio/problems/reverse-bits_2181102

long reverseBits(long n)
{
    long rev = 0;
    while (n > 0)
    {
        long last = n % 10;
        rev = rev * 10 + last;
        n = n / 10;
    }
    return rev;
}