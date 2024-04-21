// https://www.codingninjas.com/studio/problems/check-palindrome-recursive_624386?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

bool pal(int i, string &str)
{
    if (i >= str.size() / 2)
        return true;
    if (str[i] != str[str.size() - i - 1])
        return false;
    pal(i + 1, str);
}

bool isPalindrome(string &str)
{
    bool flag = pal(0, str);
    return flag;
}
