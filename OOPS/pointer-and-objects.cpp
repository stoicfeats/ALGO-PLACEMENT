#include<bits/stdc++.h>
using namespace std;

class complexNumber{
    private : // data members
        int real;
        float imaginary;
    public :
        complexNumber(){

        }

        complexNumber(int r, float i){
            real = r;
            imaginary = i;
        }

        void displaydata(){
            cout<<"Complex Number is : "<<real<<" + "<<imaginary<<"i"<<endl;
        }

        int getrealpart(){
            return real;
        }

        float getipart(){
            return imaginary;
        }

};  

complexNumber add(complexNumber x, complexNumber y){
    int r;
    float i;
    r = x.getrealpart() + y.getrealpart();
    i = x.getipart() + y.getipart();
    complexNumber temp(r,i);
    return temp;
}

int main(){
    complexNumber num1(5,4),num2(6,4),comp3;
    // num1.displaydata();
    comp3 = add(num1,num2);
    comp3.displaydata();
    return 0;
}
