#include<bits/stdc++.h>
using namespace std;

int main(){
    int var = 5;

    int *ip;
    double *dp;
    float *fp;
    char *ch;

    ip = &var;

    cout<<"Value of var is : "<<var<<endl;
    cout<<"Address of var is : "<<ip<<endl;
    cout<<"Derefrencing our pointer : "<<*ip<<endl;

    // now changing value of var using pointer
    *ip = 6 ;
    cout<<"Value of var is : "<<var<<endl;
    cout<<"Address of var is : "<<ip<<endl;
    cout<<"Derefrencing our pointer : "<<*ip<<endl;

}