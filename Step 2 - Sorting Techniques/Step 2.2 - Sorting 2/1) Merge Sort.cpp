// https://www.codingninjas.com/studio/problems/merge-sort_5846

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int h)
{
    vector<int> vc;
    int left = l;
    int right = mid + 1;

    while (left <= mid && right <= h)
    {
        if (arr[left] < arr[right])
        {
            vc.push_back(arr[left]);
            left++;
        }
        else
        {
            vc.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        vc.push_back(arr[left]);
        left++;
    }

    while (right <= h)
    {
        vc.push_back(arr[right]);
        right++;
    }

    for (int i = l; i <= h; i++)
    {
        arr[i] = vc[i - l];
    }
    return;
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}