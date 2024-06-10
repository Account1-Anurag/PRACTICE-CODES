#include <iostream>
#include <string>
#include <ctime>

using namespace std;
class date
{
private:
    int day, month, year;

public:
    date()
    {
        time_t t = time(NULL);
        tm *ptr = localtime(&t);
        day = ptr->tm_mday;
        month = ptr->tm_mon + 1;
        year = ptr->tm_year + 1900;
    }
    date(int x,int y,int z){
    day=x;
    month=y;
    year=z;
    
}
virtual void display(){
    cout<<"DATE IS :"<<day<<" "<<"MONTH IS:"<<month<<" "<<"YEAR IS :"<<year<<" "<<endl;
    }


};


int main()
{
date t1;
t1.display();
    return 0;
}