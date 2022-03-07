### Question Link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

### Solution Video : 

### Solution 1 : ( Shows TLE )

```
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        if(!nums.size()) return ans;
        int i=0,j=0,start=-1,end=0;
        int size = nums.size();
        while(i<=size){
            if(nums[i]==target && nums[i-1] != target){
                start = i;
                i++;
            }else if(nums[i]==target && nums[i-1] == target){
                end++;
                i++;
            }else{
                i++;
            }
            }
        ans[0] = start;
        ans[1] = start+end;
        return ans;
        }
};
```

### SOLUTION 2 : (Dual Binary Search && ACCEPTED) 

```
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo=0,mid=0,hi=nums.size()-1;
        vector<int> ans = {-1,-1};
        // first binary search for left
        
        while(lo<=hi){
            mid = (lo+hi)/2;
            if(nums[mid]<target){
                lo = mid+1;
            }else if(nums[mid]==target){
                ans[0] = mid;
                hi = mid-1;
            }else{
                hi = mid-1;
            }
        }
        
        lo = 0;
        hi = nums.size()-1;
        // for right side search
        while(lo<=hi){
            mid = (lo+hi)/2;
            if(nums[mid]<target){
                lo = mid+1;
            }else if(nums[mid]==target){
                ans[1] = mid;
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return ans;
    }
};
```

> Runtime: 8 ms, faster than 79.80% of C++ online submissions for Find First and Last Position of Element in Sorted Array. <br>
> Memory Usage: 13.7 MB, less than 19.56% of C++ online submissions for Find First and Last Position of Element in Sorted Array.