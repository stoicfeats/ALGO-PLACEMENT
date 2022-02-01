#include<bits/stdc++.h>
using namespace std;

class Distance{
    private :
        int meters;
    public :
        Distance(){
            meters = 15;
        }

        void displayData(){
            cout<<"Distance is : "<<meters<<endl;
        }
    friend void sum(Distance &x);
};

void sum(Distance &x){
    x.meters++;
}

int main(){
    Distance d1;
    d1.displayData();
    sum(d1);
    d1.displayData();
    return 0;
}