#include <iostream>
using namespace std;
class date{
    private:
    int day,month,year;
    public:
    date(){
        day=29;
        month=8;
        year=2023;
    }
    bool isleapyear(int year){
        return (year%4==0&&year%100!=0)||(year%400==0);
    }
    void calculate_date(int daystoadd){
        while(daystoadd>0){
            int daysinmonth;
            if(month==2){
                daysinmonth=isleapyear(year)?29:28;
            }else if(month==4||month==6||month==9||month==11){
                daysinmonth=30;
            }else{
                daysinmonth=31;
            }
            if(day+daystoadd>daysinmonth){
                daystoadd-=(daysinmonth-day+1);
                    day=1;
                    month++;
                    if(month>12){
                        month=1;
                        year++;
                    }
                
            }else{
                day+=daystoadd;
                daystoadd=0;
            }
        }
    }
    void display(){
        cout<<"FUTURE DATA : "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main(){
    date currentdate;
    int daystoadd;

    cout<<"Enter number of days to add : ";
    cin>>daystoadd;
    date futuredate=currentdate;
    futuredate.calculate_date(daystoadd);
    futuredate.display();
    return 0;
}