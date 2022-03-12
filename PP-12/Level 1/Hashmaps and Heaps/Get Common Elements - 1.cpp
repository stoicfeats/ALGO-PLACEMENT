// similar question : https://leetcode.com/problems/intersection-of-two-arrays/ 
// solution link : 

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n1,n2;
  cin >> n1;
  int arr1[n1];
  map<int,int> mp;
  vector<int> ans;
  
  for (int i = 0; i < n1; i++) {
    cin>>arr1[i];
    mp[arr1[i]]++;
  }

  cin >> n2;
  int arr2[n2];
  for (int i = 0; i < n2; i++) {
    cin >> arr2[i];
  }

  for(auto num : arr2){
    if(mp[num]>=1 && find(ans.begin(),ans.end(),num) == ans.end()){
        ans.push_back(num);
    }
  }
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
  }
  }



