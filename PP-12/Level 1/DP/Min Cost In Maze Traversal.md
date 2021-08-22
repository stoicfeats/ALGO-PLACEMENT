// shows few silly errors in cpp code 

#include <bits/stdc++.h>
using namespace std;

void main()
{
    int n,m; cin>>n>>m;
    int bar[n][m];
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>bar[i][j];
        }
    }
    cout<< min_cost(bar);

}

int min_cost(int grid[][]){
        int m = arr.size();
        int n = arr[0].size();
        int sum[n][m];
    
        for (int i = 1; i < m; i++)
            sum[i][0] = sum[i - 1][0] + grid[i][0];
            
        for (int j = 1; j < n; j++)
            sum[0][j] = sum[0][j - 1] + grid[0][j];
            
        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                sum[i][j]  = min(sum[i - 1][j], sum[i][j - 1]) + grid[i][j];
                
        return sum[m - 1][n - 1];
}