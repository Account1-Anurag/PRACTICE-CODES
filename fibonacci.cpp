#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> anurag;
        if(n=1){
            return {1};
        }
        if(n=2){
            return {1,1};
        }
        long long a=1,b=1,limit=2;
        while(limit<n){
            a=a+b;
            b=a-b;
            anurag.push_back(a);
            limit++;
        }
        return anurag;
        
    }
};
int main()
{

    return 0;
}