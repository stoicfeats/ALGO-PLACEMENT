## Remove all duplicates from a given string

>Example 1:
```
Input:
Str = geeksforgeeks
Output: geksfor
Explanation: After removing duplicate
characters such as e, k, g, s, we have
string as "geksfor".
```

```
class Solution{
public:
	string removeDuplicates(string str) {
	    unordered_map<char, int> m;
	    string s;
	    for(int i = 0; i< str.size(); i++)
	    {
	        if(m[str[i]]==0)
	        {
	            s.push_back(str[i]);
	            m[str[i]]++;
	        }
	    }
	    str = s;
	    return s;
	}
};
```
