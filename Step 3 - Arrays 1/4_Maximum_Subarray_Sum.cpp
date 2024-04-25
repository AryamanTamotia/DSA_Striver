// https://www.codingninjas.com/studio/problems/630526

long long maxSubarraySum(vector<int> arr, int n)
{
    long long sum = 0;
    long long maxi = 0;
    // int ansStart=-1;
    // int ansEnd=-1;
    // int start;
    for (int i = 0; i < n; i++)
    {
        // if(sum==0) start=i;
        sum = sum + arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            // ansStart=start;
            // ansEnd=i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    // for(int i=ansStart;i<=ansEnd;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    return maxi;
}