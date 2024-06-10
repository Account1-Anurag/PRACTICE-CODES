#include <bits/stdc++.h>
using namespace std;
bool isdivide(int num,int a){
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x=2;
        // if(b-a==1){
        //     cout<<a*b<<endl;
        // }
        int temp=b;
       if(a%2==0||b%2==0){
            do
            {
                
               b=temp*x;
                x++;
            } while (b%a!=0);
            cout<<b<<endl;
        }
        else if(a%2!=0&&b%2!=0){
            do
            {
                
               b=temp*x;
                x++;
            } while (b%a!=0);
            
        }
    }
    return 0;
}