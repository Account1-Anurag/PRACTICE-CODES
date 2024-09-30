#include <bits/stdc++.h>
using namespace std;
class A{
    public:
   int a;
   void set_data(){
    cout<<"Enter the value of A :";
    cin>>a;
   }
   void get_data(){
    cout<<"the value of A is : "<<a<<endl;
   }
};
//class inherited from class A
class B: public A{
    public:
    int b;
    void set_data_B(){
    cout<<"Enter the value of B :";
    cin>>b;
   }
   void get_data_B(){
    cout<<"the value ofb is : "<<a<<endl;
   }

};


class C:public B{
    public:
    int c=89;
    void sum(){
        cout<<"The sum of a and b is :"<<a+b<<endl;
    }
};

class D:public C{
    public:
    void add(){
        cout<<"The sum of a + b + c is "<<a+b+c<<endl;
        cout<<"I am inherited from C class \n\n";
    }
};

class E: public C{
    public:
    void product(){
        cout<<"The sum of a*b*c is :"<<a*b*c<<endl;
        cout<<"I am inherited from c class";
    }
};
int main(){
    C c;
    c.set_data();
    c.get_data();
    c.set_data_B();
    c.get_data_B();

    c.sum();

    // creating object of D class
    D d;
    d.add(); 
    // creating object of E class
    E e;
    e.product();
    return 0;
}