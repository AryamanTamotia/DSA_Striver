// https://www.codingninjas.com/studio/problems/reverse-an-array_8365444?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void rever(int n, vector<int> &nums, int i)
{
    if (i >= n / 2)
        return;
    swap(nums[i], nums[n - i - 1]);
    rever(n, nums, i + 1);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    rever(n, nums, 0);
    return nums;
}
