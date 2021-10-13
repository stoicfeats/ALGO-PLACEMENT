### Question Link : https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1/?category[]=Queue&category[]=Queue&problemStatus=unsolved&page=1&query=category[]QueueproblemStatusunsolvedpage1category[]Queue#


### Video Solution : 

SOLUTION : (ACCEPTED)

```
vector<string> generate(int N)
{
   vector<string> binArr;
    queue<string> q;
    q.push("1");
    while(N--){
        string s1 = q.front();
        q.pop();
        binArr.push_back(s1);
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
return binArr;
}
```