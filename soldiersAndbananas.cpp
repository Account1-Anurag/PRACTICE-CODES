#include <bits/stdc++.h>
using namespace std;

int main()
{
    long k, n, w;
    cin >> k >> n >> w;

    long sum = (w*(w+1))/2;

    long t=sum*k;
    if(t>n){
        cout<<t-n;
    }
    else{
        cout<<"0";
    }

    return 0;
}