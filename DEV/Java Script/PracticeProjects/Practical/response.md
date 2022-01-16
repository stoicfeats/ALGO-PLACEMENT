# Browser 

Website : https://practice.geeksforgeeks.org/explore/?category%5B%5D=Dynamic%20Programming&difficulty%5B%5D=1&page=1&category%5B%5D=Dynamic%20Programming

## TASK 1

Task : to click on sign-up button

1. Extract the class of element 

```
class="header-main__signup login-modal-btn"
```

2. Use query selector or getelementbyID

```
document.querySelector("header-main__signup.login-modal-btn")
```

3. Use click function 

```
document.querySelector("header-main__signup.login-modal-btn").click()
```

Task : click on Sign Up

Now for sign, class is same but ID is different, so we will use Select By Element ID

```
document.getElementById("tab2").click()
```

4. Syntax for a blue button 

```
            <p class="lead">
              <a class="btn btn-primary btn-lg" href="#" role="button">Learn more</a>
            </p>
```
5. How to color background of whole page : 
```
document.body.style.backgroundColor
```

6. How to generate random hex number : 
```
const color = Math.random().toString(16).substring(2,8);
``` 
Note : toString() have base 10 normally but we changed it too 16 for hexa decimal;