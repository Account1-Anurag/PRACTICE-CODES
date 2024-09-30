#include <bits/stdc++.h>
using namespace std;
class employee
{
public:
int id;
int salary;
string name;
void get_data(){
    cout<<"THe name is "<<name<<endl;
    cout<<"the id is "<<id<<endl;
    cout<<"THe salary is :"<<salary<<endl;
}
};
class programmer: public employee{
    public:
    int id=234567;
    string name="programmer";
    int salary=100000;
    void get_data(){
        cout<<"THe name is "<<name<<endl;
        cout<<"the id is "<<id<<endl;
        cout<<"THe salary is :"<<salary<<endl;
    }

};


class child : public employee,programmer{
    public:
    void get_data(){
        programmer::get_data();
    }
};

int main(){
    employee e1;
    int id;
    string name;
    int salary;
    
    cout<<"Please enter your name buddy \n";
    cin>>name;
    cout<<"Please enter your id buddy \n";
    cin>>id;
    cout<<"Please enter your salary buddy \n";
    cin>>salary;

    child bacha;
    bacha.get_data();

    return 0;
}