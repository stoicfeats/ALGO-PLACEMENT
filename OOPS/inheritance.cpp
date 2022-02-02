#include<bits/stdc++.h>
using namespace std;

class shape{
    protected :
        int width;
        int height;
    public :
        void setwidth(int x){
            width = x;
        }
        void setheight(int y){
            height = y;
        }
        void display(){
            cout<<width<<endl;
            cout<<height<<endl;
        }
};

// derived class
class Rectangle : public shape{
    public :
    Rectangle(){
        width = 10;
        height = 10;
    }
        int getarea(){
            return (width*height);
        }
};

int main(){
    Rectangle rect;
    // rect.setwidth(5);
    // rect.setheight(4);
    rect.display();
    cout<<"AREA OF RECTANGLE : "<<rect.getarea();
}