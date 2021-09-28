### Question Link : https://practice.geeksforgeeks.org/problems/valid-expression1025/1/?problemStatus=unsolved&difficulty[]=1&page=1&category[]=Stack&query=problemStatusunsolveddifficulty[]1page1category[]Stack#


### Solution Video : https://www.youtube.com/watch?v=uuE2pEjLiEI

SOLUTION : (ACCEPTED)

```
bool valid(string str)
{
    stack<int> stack;
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            stack.push(str[i]);
        }else if(str[i]==')'){
            if(stack.empty()){
                return 0;
            }else if(stack.top()!='('){
                return 0;
            }else{
                stack.pop();
            }
        }else if(str[i]=='}'){
            if(stack.empty()){
                return 0;
            }else if(stack.top()!='{'){
                return 0;
            }else{
                stack.pop();
            }
        }else if(str[i]==']'){
            if(stack.empty()){
                return 0;
            }else if(stack.top()!='['){
                return 0;
            }else{
                stack.pop();
            }
        }
    }
if(stack.empty()){
    return "1";
}else{
    return "0";
}
}
```