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
    nge[n-1] = -1;
    stack.push(arr[n-1]);

    for(int i=n-2;i>=0;i--){
        while(!stack.empty() && arr[i]>=stack.top()) stack.pop();
        nge[i] = stack.empty() ? -1 : stack.top();
        stack.push(arr[i]);
    }

    
}
