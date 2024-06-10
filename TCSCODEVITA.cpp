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
        int n=num.size();
        bool flag=1;
        if(n>6){
            int count=0;
            for(int i=2;i<n&&num[i]!='e';i++){
                int temp=int(x[i])-48;
                count+=temp;
            }
        }
        else{
            for(int i=0;i<n;i++){
            if(arr[i]=='.'){
                flag=0;
                break;
            }
        }
        if(flag==1){
            
        }
        }
        
    }
    
    return 0;
}