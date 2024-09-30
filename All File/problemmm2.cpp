#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>arr[i][j];
            }
            cout<<endl;
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(arr[i][j]=='?'&&j==0){
                    if(arr[i][1]=='B'&&arr[i][2]=='C'){
                        cout<<"A"<<endl;
                        
                    }
                    if(arr[i][1]=='A'&&arr[i][2]=='B'){
                        cout<<"C"<<endl;
                        
                    }
                    if(arr[i][1]=='A'&&arr[i][2]=='C'){
                        cout<<"B"<<endl;
                        
                    }
                    if(arr[i][1]=='C'&&arr[i][2]=='A'){
                        cout<<"B"<<endl;
                        
                    }
                    if(arr[i][1]=='B'&&arr[i][2]=='A'){
                        cout<<"C"<<endl;
                       
                    }
                    if(arr[i][1]=='C'&&arr[i][2]=='B'){
                        cout<<"A"<<endl;
                       
                    }
                }
                else if(arr[i][1]=='?'){
                    if(arr[i][0]=='B'&&arr[i][2]=='C'){
                        cout<<"A"<<endl;
                        
                    }
                    if(arr[i][0]=='A'&&arr[i][2]=='B'){
                        cout<<"C"<<endl;
                        
                    }
                    if(arr[i][0]=='A'&&arr[i][2]=='C'){
                        cout<<"B"<<endl;
                        
                    }
                    if(arr[i][0]=='C'&&arr[i][2]=='A'){
                        cout<<"B"<<endl;
                        
                    }
                    if(arr[i][0]=='B'&&arr[i][2]=='A'){
                        cout<<"C"<<endl;
                       
                    }
                    if(arr[i][0]=='C'&&arr[i][2]=='B'){
                        cout<<"A"<<endl;
                       
                    }
                }
                else if(arr[i][2]=='?'){
                    if(arr[i][0]=='B'&&arr[i][1]=='C'){
                        cout<<"A"<<endl;
                        
                    }
                    if(arr[i][0]=='A'&&arr[i][1]=='B'){
                        cout<<"C"<<endl;
                        
                    }
                    if(arr[i][0]=='A'&&arr[i][1]=='C'){
                        cout<<"B"<<endl;
                        
                    }
                    if(arr[i][0]=='C'&&arr[i][1]=='A'){
                        cout<<"B"<<endl;
                        
                    }
                    if(arr[i][0]=='B'&&arr[i][1]=='A'){
                        cout<<"C"<<endl;
                       
                    }
                    if(arr[i][0]=='C'&&arr[i][1]=='B'){
                        cout<<"A"<<endl;
                       
                    }
                }
            }
        }
    }
    return 0;
}