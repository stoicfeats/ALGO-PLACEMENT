// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


class Solution {
public:
    long long findMin(int N, int M, vector<int> &p, vector<int> &w, vector<int> &source, vector<int> &destination) {
    vector<long long> k;
    for(int i=0;i<w.size();i++)k.push_back(w[i]);
    vector<long long> adj[100000];
    sort(k.begin(),k.end());
    for(long long i=2;i<k.size();i++)k[i] += k[i-1];

    for(long long i=0;i<p.size();i++){
        adj[p[i]].push_back(i);
        adj[i].push_back(p[i]);
    }
    queue<pair<long long,long long>> q;
    long long  tot = 0,ans = 0;
    for(long long i=0;i<source.size();i++){
        queue<pair<long long,long long>> q;
        q.push({source[i],0});
        long long steps = 0;
        while(!q.empty()){
            pair<long long,long long> t = q.front();
            q.pop();
            if(t.first == destination[i]){
                steps = t.second;
                break;
            }
            for(auto k:adj[t.first]){
                q.push({k,t.second+1});
            }
        }
        //for(int i=1;i<=steps;i++)ans += w[i]
        
        if(steps >= k.size()) ans += k[k.size()-1];
        else ans += k[steps];
    }
    return  ans;    
    }
};


// { Driver Code Starts.

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> p(N), w(N), source(M), destination(M);

        for (int i = 0; i < N; i++)cin >> p[i];
        for (int i = 0; i < N; i++)cin >> w[i];

        for (int i = 0; i < M; i++)cin >> source[i];
        for (int i = 0; i < M; i++)cin >> destination[i];

        Solution sol;
        cout << sol.findMin(N, M, p, w, source, destination) << "\n";
    }
    return 0;
}  // } Driver Code Ends