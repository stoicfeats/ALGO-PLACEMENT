#include <bits/stdc++.h>
#include <stack>
#include <vector>
#include <utility>
using namespace std;

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], long n)
    {
    // right
    stack<pair<int, int>> s;
    vector<int> right,left;
    int index_right = n;
    for (long long i = n - 1; i >= 0; i--)
    {
        if (s.empty())
            right.push_back(index_right);
        else if (!s.empty() && s.top().first < arr[i])
            right.push_back(s.top().second);
        else if (!s.empty() && s.top().first >= arr[i])
        {
            while (!s.empty() && s.top().first >= arr[i])
                s.pop();
            if (s.empty())
                right.push_back(index_right);
            else
                right.push_back(s.top().second);
        }
        s.push({arr[i], i});
    }
    
    // left 
    stack<pair<int, int>> s;
    int index_left = -1;
    for (long long i = 0; i < n; i++)
    {
        if (s.empty())
            left.push_back(index_left);
        else if (!s.empty() && s.top().first < arr[i])
            left.push_back(s.top().second);
        else if (!s.empty() && s.top().first >= arr[i])
        {
            while (!s.empty() && s.top().first >= arr[i])
                s.pop();
            if (s.empty())
                left.push_back(-1);
            else
                left.push_back(s.top().second);
        }
        s.push({arr[i], i});
    }

    long long m = INT_MIN;
    reverse(right.begin(), right.end());
        for (long long i = 0; i < n; i++)
        {
            m = max(m,(right[i]-left[i]-1)*arr[i]);
        }
        return m;  
    }
};