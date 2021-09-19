#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
int arr[n];
int nge[n];
for(int i=0;i<n;i++){
        cin>>arr[i];
    }

stack<int> stack;
    nge[n-1] = n;
    stack.push(n-1);

    for(int i=n-2;i>=0;i--){
        while(!stack.empty() && arr[i]>=arr[stack.top()]) stack.pop();
        nge[i] = stack.empty() ? n : stack.top();
        stack.push(i);
    }

    for (auto i : nge) cout << i <<endl;

    // for(int i=0;i<n-k;i++){
    //     while(nge[i]<)
    // }
}
