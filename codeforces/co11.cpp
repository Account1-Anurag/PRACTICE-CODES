#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x1,y1;
        int x2,y2;
        int x3,y3;
        int x4,y4;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        cin>>x4>>y4;
        int side=0;
        if(x1!=x2){
            side=abs(x2-x1);
        }
        else if(x1!=x3){
            side=abs(x1-x3);
        }
        cout<<side*side<<endl;
    }
    return 0;
}