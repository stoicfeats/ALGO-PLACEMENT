```
#include <iostream>
using namespace std;

class Cars{
    //data members
    private :
        string company_name;
        string mode_name;
        string fuel_type;
        int engine;
        int price;
    
    public :
    // member function 
        void setData(string cname, string mname, string ftype, int e, int p){
        company_name = cname;
        mode_name = mname;
        fuel_type = ftype;
        engine = e;
        price = p;
        }

        void display(){
            cout<<company_name<<endl;
            cout<<mode_name<<endl;
            cout<<fuel_type<<endl;
            cout<<engine<<endl;
            cout<<price<<endl;
        }
};

int main() {
    Cars c1;
    c1.setData("renault","duster","petrol",1800,1500000);
    c1.display();
}
```