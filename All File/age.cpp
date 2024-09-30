// #include <iostream>
// using namespace std;

// class exam{
//     int date;
//     int month;
//     int year;
//     public:
//     void init(int x,int y, int z){
//         date=x;
//         month=y;
//         year=z;
//     }
//     void sub_date (exam t1,exam t2) {
//         year=(t1.year-t2.year);
//         month=(t1.month-t2.month);
//         date=(t1.date-t2.date);
//         if(month<0){
//             month=month+12;
//             year--;
//         }
//         if(date<0){
//             date=date+31;
//             month--;
//         }
//     }
//     void exam_date(exam t1,exam t4){
//         year=(t4.year-t1.year);
//         month=(t4.month-t1.month);
//         date=(t4.date-t1.date);
//         if(date<0){
//             date=date+31;
//             month--;
//         }

//     }
//     virtual void display()
//     {
//         cout<<"Time in year :   "<<year<<"    ";
//         cout<<"Time in month:   "<<month<<"    ";
//         cout<<"Time in date :   "<<date<<"    ";
//         cout<<endl;
//     }

// };

// int main(){
//     exam t1,t2,t3,t4,t5;
//     t1.init(25,8,2023);
//     t2.init(23,10,2004);
//     t3.sub_date(t1,t2);
//     t4.init(3,9,2023);
//     t5.exam_date(t1,t4);
//     t1.display();
//     t2.display();
//     t3.display();
//     t4.display();
//     t5.display();
//     return 0;
// }

#include <iostream>
using namespace std;
// defining constant
#define half 0.5
int main()
{
    int base = 10;
    int height = 10;
    // Storing the value of area in a float data type
    float area=half * base * height;
    // calculating area of triangle
    cout << "The area of right angle triangle is: " << area;
    return 0;
}


