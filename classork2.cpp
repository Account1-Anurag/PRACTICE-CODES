// creat a class for data members hours minutes and second
// using accept the two diffeent tiiming by accept method and enroll two different object at the two timing using add time method display the all the three timing using display method 
#include <iostream>
using namespace std;

class clock{
    int hour;
    int minute;
    int second;
    public:
    void init(int x,int y, int z){
        hour=x;
        minute=y;
        second=z;
    }
    void add_time (clock t1,clock t2) {
        hour=(t1.hour+t2.hour);
        minute=(t1.minute+t2.minute);
        second=(t1.second+t2.second);
        if(minute>=60){
            minute=minute-60;
            hour++;
        }
        if(second>=60){
            second=second-60;
            minute++;
        }
    }
    virtual void display()
    {
        cout<<"Time in Hour :     "<<hour;
        cout<<"Time in Minute :   "<<minute;
        cout<<"Time in Second:    "<<second;
        cout<<endl;
    }

};


int main(){
    clock t1,t2,t3;
    t1.init(2,35,45);
    t2.init(4,55,54);
    t3.add_time(t1,t2);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}