// https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h>

vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    vector<int> vc(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= x)
            vc[nums[i] - 1]++;
    }
    return vc;
}