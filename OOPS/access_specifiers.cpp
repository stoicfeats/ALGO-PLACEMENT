#include<bits/stdc++.h>
using namespace std;

class mybaseclass{
    public :
        int x;
        mybaseclass(){
            x = 15;
            y = 6;
            z = 9;
        }
        void display(){
            cout<<"Test text";
        }
        // void showy(){
        //     cout<<"Y : "<<y;
        // }
        // void showz(){
        //     cout<<"Z : "<<z;
        // }
    protected :
        int y;
    private :
        int z;
};

class myderivedclass : public mybaseclass{
    // protected int x
    // protected int y
};

class myderivedclass2 : protected myderivedclass{

};

// void myoutsidefunction(mybaseclass obj){
//     // cout<<"X : "<<obj.x<<endl;
//     obj.showy();
//     cout<<endl;
//     obj.showz();
//     // obj.display();
// }

// void solve(mybaseclass obj2){
//     return obj2.display();
// }



int main(){
    mybaseclass obj1;
    myderivedclass obj2;
    myderivedclass2 obj3;
    cout<<"X :"<<obj3.x<<endl;
    return 0;
}