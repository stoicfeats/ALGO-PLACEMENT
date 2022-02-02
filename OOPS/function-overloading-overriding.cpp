// function overridng comes under inheritance and it's only possible with inheritance
#include<bits/stdc++.h>
using namespace std;

class Animals{
    public :
        void makesound(){
            cout<<"Animal Sound";
        }
};

class Dog : public Animals{
    public :
        void makesound(){
            cout<<"Dog Sound";
        }
};

class Cat : public Animals{
    public :
        void makesound(){
            cout<<"Cat Sound";
        }
};

int main(){
    Animals animal;
    animal.makesound();

    cout<<endl;
    Dog dog;
    dog.makesound();

    cout<<endl;
    Cat cat;
    cat.makesound();
}