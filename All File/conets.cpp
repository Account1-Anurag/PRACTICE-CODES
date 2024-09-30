#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n],q[n];
        
        int a=0;
        int b=0;
        int c=0;
        int d=0;
        int z=0;
        for(int i=0;i<n;i++){
            cin>>p[i];
            cin>>q[i];
        }
        for(int i=0;i<n;i++){
            if(p[i]>0&&q[i]>0)a++;
            else if(p[i]>0&&q[i]<0)b++;
            else if(p[i]<0&&q[i]>0)c++;
            else if(p[i]<0&&q[i]<0)d++;
        }
       
        if(a==0)z++;
        if(b==0)z++;
        if(c==0)z++;
        if(d==0)z++;

        if(z>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
