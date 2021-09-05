// half of the test cases are falling, need to figure out why

#include<bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin>>n;
	   
	   long ocz = 1;
	   long oco = 1;
	   
	   for(long long i=2;i<=n;i++){
	       long ncz = oco%1000000007;
	       long nco = ocz%1000000007 + oco%1000000007;
	       
	       ocz = ncz;
	       oco = nco;
	   }
	   
	   long long total = ocz%1000000007 + oco%1000000007;
	   total = total*total;
	    
	    
	   cout<< total%1000000007;
    	    
	}
