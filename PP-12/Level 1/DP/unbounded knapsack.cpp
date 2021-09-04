
#include<bits/stdc++.h>
using namespace std;

int knapsack(int count,int arr[],int weight[],int sum){
    int dp[count+1][sum+1];
    for(int i=0;i<count+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0||j==0){
                dp[i][j] = 0;
            }else {
                if(weight[i-1]>j){
                    dp[i][j] = dp[i-1][j];
                }else{
                    dp[i][j] = max(dp[i-1][j],dp[i-1][j-weight[i-1]]+arr[i-1]); 
                }
            }
        }
    }
    return dp[count][sum];
};


int main()
{
    int count1;
    cin>>count1;
    int arr1[count1];
    for(int i=0;i<count1;i++){
        cin>>arr1[i]; 
    }

    int weight1[count1];
    for(int i=0;i<count1;i++){
        cin>>weight1[i];
    }
    int sum1;cin>>sum1;
    cout<<knapsack(count1,arr1,weight1,sum1);
    return 0;
}
