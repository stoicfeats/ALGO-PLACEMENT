class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
multiset<int,greater<int>> st;
for(int i = 0; i < k; i++) {
st.insert(arr[i]);
}
vector<int> ans; ans.push_back(*st.begin());
for(int i = 1; i <= n-k; i++) {
st.erase(st.find(arr[i-1]));
st.insert(arr[k+i-1]);
ans.push_back(*st.begin());
}
return ans;
    }
};
