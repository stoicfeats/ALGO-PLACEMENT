### Question Link : https://leetcode.com/problems/valid-sudoku/

### Solution Video : https://www.youtube.com/watch?v=rJ9NFK9s_mI

### Solution : ( Accepted sadly that's in N^2 )


```
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set <string> visited;

        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col] != '.'){
                    if(visited.find("row" + to_string(row) + to_string(board[row][col])) != visited.end() 
                       || visited.find("col" + to_string(col) + to_string(board[row][col]))!= visited.end() 
                       || visited.find("box" + to_string((row/3)*3+(col/3)) + to_string(board[row][col])) != visited.end())                     {
                        return false;
                    }
                }
                
                visited.insert("row" + to_string(row) + to_string(board[row][col]));
                visited.insert("col" + to_string(col) + to_string(board[row][col]));
                visited.insert("box" + to_string((row/3) * 3 + (col/3)) + to_string(board[row][col]));

            }
        }
        return true;
    }
};
```

### SOLUTION 2 : ( Accepted )

```
class Solution {
public:
    
    bool isValidSudoku(vector<vector<char>>& nums) {
        
       unordered_set<string>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[0].size();j++)
            {
                if(nums[i][j] != '.')
                {
                    int num=nums[i][j]-'0';
                    
                    string row="Row"+to_string(i)+to_string(num);
                    string col="Col"+to_string(j)+to_string(num);
                    string Box="Box"+to_string(i/3*3 + j/3)+to_string(num);
                    
                    if(mp.find(row) != mp.end() || mp.find(col)!=mp.end() || mp.find(Box) != mp.end())
                        return false;
                    
                    mp.insert(row);
                    mp.insert(col);
                    mp.insert(Box);
                }
            }
        }
        return true;
    }
};
```

> Runtime: 44 ms, faster than 27.44% of C++ online submissions for Valid Sudoku. <br>
> Memory Usage: 20 MB, less than 39.98% of C++ online submissions for Valid Sudoku.