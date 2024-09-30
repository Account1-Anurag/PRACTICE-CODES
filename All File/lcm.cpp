#include <bits/stdc++.h>
#define ll long long
#define vctr vector<long long>

using namespace std;
int gcd(int a, int b)
{
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
 
    // Return gcd of a and b
    return result;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,k;
	    cin>>x>>y>>k;
	    int t=gcd(x,y);
	    if(x==y){
	        cout<<x*2<<endl;
	    }
	    else if(x>y){
	        x=t<<endl;
	    }
	    else{
	        y=x*y/t<<endl;
	    }
	}
	return 0;
}
