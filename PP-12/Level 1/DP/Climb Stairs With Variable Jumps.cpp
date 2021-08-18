#include <iostream>
using namespace std;

int cs(int arr[], int n){
    int[] dp[n+1];
    
    dp[n] = 1;

    for(int i = n-1; i>0; i--){
        for(int jump =1; jump<= arr[i]; jump++ ){
            if(i+jump<n=){
                dp[i] += dp[i+jumps];
            }
        }
    }

    return dp[n];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    cout<<cs(arr,n)<<endl;
}