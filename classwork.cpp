#include <iostream>
using namespace std;

class student{
    int roll_no,marks;
    string name;
    char gender;
    public:
    void init(int x,int y, string naaam,char g){
        roll_no=x;
        marks=y;
        name=naaam;
        gender=g;
    }

    virtual void display()
    {
        cout<<"The Roll no is :"<<roll_no<<endl;
        cout<<"The Name of student is :"<<name<<endl;
        cout<<"The Gender is :"<<gender<<endl;
        cout<<"The Marks is :"<<marks<<endl;
    }
};

int main(){
    student std1,std2;
    std1.init(101,96,"Anurag",'M');
    std2.init(102,76,"Adarsh",'M');
    std1.display();
    std2.display();
    return 0;
}