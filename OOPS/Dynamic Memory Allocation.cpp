#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    int *arr;

    cout<<"Enter the number of values you want to store(size of array) : "<<endl;
    cin>>size;
    arr = new int[size];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Elements of the array are :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}