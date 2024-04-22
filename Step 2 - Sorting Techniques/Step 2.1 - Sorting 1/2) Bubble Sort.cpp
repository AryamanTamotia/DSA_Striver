// https://www.codingninjas.com/studio/problems/bubble-sort_624380?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        bool flag = 1;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag)
            break;
    }
}