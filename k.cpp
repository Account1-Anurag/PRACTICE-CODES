#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        if(N == 1) return false;
        long long sum = 1;
        for(int i = 2;i <= sqrt(N);i++){
            if(N % i == 0){
                sum += i + N/i;
            }
        }
        return (sum == N)?1:0;
    }
};
int main(){
    
    return 0;
}