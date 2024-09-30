#include <iostream>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    public:
    student(){
        rollno = 15;
        name="Anurag";

    }
    student (int x,string y){
         rollno=x;
         name=y;
    }
    virtual void display(){
        cout<<"the roll no is :"<<rollno<<endl;
        cout<<"the name is : "<<name<<endl;
    }

};
int main(){
    int x;
    string y;
    cout<<"enter the value of roll no :"<<endl;
    cin>>x;
    cout<<"enter the value of name :"<<endl;
    cin>>y;
    student std1;
    student std2(x,y);
    std1.display();
    std2.display();
    // std1.display;
    
    return 0;
}