#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool isPrime(int n){
        if(n==0||n==1){
            return false;
        }
        for(int i=0;i<=n/2;++i){
            if(n%i==0){
                return false;
                break;
            }
            
        }
        return true;
    }
    int minNumber(int arr[],int N)
    {
        int count=0;
        for(int i=0;i<N;i++){
            count+=arr[i];
        }
        while(isPrime(count)==false){
            count++;
        }
        cout<<count;
        
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}