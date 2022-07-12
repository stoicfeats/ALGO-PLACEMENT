### Question Link : https://practice.geeksforgeeks.org/problems/peak-element/1#

### Solution Video : https://www.youtube.com/watch?v=OINnBJTRrMU&ab_channel=AdityaVerma


### Solution : (Brute Force, optimised is with binary tree O(logn))

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       if(arr[0]>=arr[1] || n==1) return 0;
       if(arr[n-1]>=arr[n-2]) return n-1;
       
       for(int i=1;i<n;i++){
           if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
               return i;
			   }
       }
        
    }
};