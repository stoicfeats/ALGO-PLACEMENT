#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  map<char,int> mp;
  for(char ch : str) mp[ch]++;
  char c ;
  int freq = 0;
  for(auto x : mp) {
    if(x.second>freq){
      freq = x.second;
      c = x.first;
    }
  }
  cout<<c;

}