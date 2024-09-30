#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    
    int a[m][3];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
        
    }
    int m1=0;
    for(int i=0;i<m;i++){
        m1+=a[i][0];
        
    }
    int m2=0;
    for(int i=0;i<m;i++){
        m2+=a[i][1];
        
    }
    int m3=0;
    for(int i=0;i<m;i++){
        m3+=a[i][2];
    }
    
    if(m1==0&&m2==0&&m3==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    
    return 0;
}