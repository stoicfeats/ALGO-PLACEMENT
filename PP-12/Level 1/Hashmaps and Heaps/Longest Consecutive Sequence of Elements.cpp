#include<bits/stdc++.h>
using namespace std;

void longestConsecutive(vector<int> &nums) {

        unordered_map<int,bool> mp;
        for(auto it:nums) mp[it] = true;
        for(auto it:nums){
            if(mp.find(it-1)!=mp.end()) mp[it] = false;
        }
        
        int msp = 0,ml=0;
        for(int val : nums){
            int tsp = 0,tl=1;
            
            while(mp.find(val+tl)!=mp.end()) tl++;
            
            if(tl>ml){
                ml = tl;
                msp = val;
            }
        
        }
        for(int i=0;i<ml;i++){
            cout<<msp+i<<endl;
        }

}

int main()
{
  vector<int>arr;
  int n;
  cin >> n;
  for (int i = 0 ; i < n; i++) {
    int data;
    cin >> data;
    arr.push_back(data);
  }
    longestConsecutive(arr);

  return 0;
}