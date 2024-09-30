#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        float x;
        cin>>x;
        string name;
        cin>>name;
        string num;
        num=to_string(x);
        cout<<num<<endl;
        int n=num.size();
        bool flag=1;
          int count=0;
        if(n>6){
            for(int i=2;i<n&&num[i]!='e';i++){
                int temp=int(num[i])-48;
                cout<<temp<<endl;
                count+=temp;
            }
        }
       cout<<count<<endl;
    
    return 0;
}}