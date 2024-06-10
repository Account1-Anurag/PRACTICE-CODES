#include <iostream>
using namespace std;
class sphere{
int radius, volume, surface_area;

void method(int radius){
    cout<<"enter the radius  "<<endl;
    cin>>radius;

}
void cal_volume(int volume,int surface_area){
    volume= (4/3)*3.14*(radius)*(radius)*(radius);
    surface_area=4*3.14*radius*radius;
    cout<<"the volume of sphere is "<<volume<<endl;
    cout<<"the surface_area of sphere is "<<surface_area<<endl;


}
};
int main(){
        
    return 0 ;
}
 


    

