### Question Link : https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1/?page=1&category[]=Arrays&curated[]=1&sortBy=submissions#

### Solution Video : 


### SOLUTION 1 ; (SORTING)

```

class Solution{
    public:

    //Function to check if two arrays are equal or not.
   
    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<N;i++){
            if(A[i]!=B[i]) return false;
        }
        return true;
    }
};

```




### SOLUTION 2 : (Basic Hashing)

```
class Solution{
    public:

    //Function to check if two arrays are equal or not.
   
    bool check(vector<ll> A, vector<ll> B, int N) {
        
        unordered_map<ll,ll>mp1,mp2;
        for(ll i=0;i<N;i++){
            mp1[A[i]]++;
            mp2[B[i]]++;
        }
        for(ll i=0;i<N;i++){
            if(mp1[B[i]]!=mp2[B[i]]) return false;
        }
        return true;
    }
};
```