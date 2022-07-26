- When an array is declared suppose int arr[5] so compiler will allocate a continous block of memory of size = 5*sizeof(int) 



REFERENCE OPERATOR : 

When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration. 

```
#include <iostream> 
using namespace std; 
int main() 
{ 
	int x = 10; 
	// ref is a reference to x. 
	int& ref = x; 
	// Value of x is now changed to 20 
	ref = 20; 
	cout << "x = " << x << '\n'; 
	// Value of x is now changed to 30 
	x = 30; 
	cout << "ref = " << ref << '\n'; 
	cout << "x = " << x << '\n'; 
	return 0; 
}
```


IMP : https://www.codingninjas.com/blog/2021/08/31/passing-arrays-to-functions-in-c-c/
Here passing anything, int arr[], int cheese[], int* dog, everything will be converted to int pointer because no parameter can actually receive an array so they all receive the base address of array and behaves like a array in themselves.



REFERENCE IN NORMAL VARIABLE :




```
#include <iostream> 
using namespace std; 
void swapNums(int &x, int &y) { 
  int z = x; 
  x = y; 
  y = z; 
} 
int main() { 
  int firstNum = 10; 
  int secondNum = 20; 
  cout << "Before swap: " << "\n"; 
  cout << firstNum << secondNum << "\n"; 
  swapNums(firstNum, secondNum); 
  cout << "After swap: " << "\n"; 
  cout << firstNum << secondNum << "\n"; 
  return 0; 
}
```
