// https://www.codingninjas.com/studio/problems/k-most-occurrent-numbers_625382?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

vector<int> getFrequencies(vector<int> &v)
{
    int n = v.size();
    int max_value = INT_MIN;
    int min_value = INT_MAX;
    int max_element, min_element;

    map<int, int> mpp;
    for (auto it : v)
    {
        mpp[it]++;
    }

    for (auto it : mpp)
    {
        if (it.second > max_value)
        {
            max_value = it.second;
            max_element = it.first;
        }
        if (it.second < min_value)
        {
            min_value = it.second;
            min_element = it.first;
        }
    }

    vector<int> vc;
    vc.push_back(max_element);
    vc.push_back(min_element);
    return vc;
}