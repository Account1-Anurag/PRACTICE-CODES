#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        double s=sqrt((b*b)-4*a*c);
        if(s<0){
            return {-1};
        }
        // int t=sqrt(s);
        // int p=(-b)+t;
        // int q=(-b)-t;
        double z=((-1.0*b)+s)/(2.0*a);
        double y=((-1.0*b)-s)/(2.0*a);
        vector<int> anurag;
        // if(z>y){
        //     return z;
        // }
        // else{
        //     return y;
        // }
        anurag.emplace_back(max(floor(z),floor(y)));
        anurag.emplace_back(min(floor(z),floor(y)));
    return anurag;
    }
    
};
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    return 0;
}

