### Question Link : https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1/?difficulty[]=0&page=1&category[]=Queue&query=difficulty[]0page1category[]Queue#

### Video Solution : 

SOLUTION : (ACCEPTED)

```
queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> s;
    int size = q.size()-k;

    while(k--){
        s.push(q.front());
        q.pop();
    }
    
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    
    
    while(size>0){
        int p ;
        p = q.front();
        q.pop();
        q.push(p);
        size--;
    }
    
    return q;   
}
```