#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        int N, K;
        cin >> N >> K;
        if (N == 1 && K == 1)
        {
            cout << "YES\n";
            continue;
        }
        else if(N==2&&K==1){
            cout << "YES\n";
            continue;
        }
        else if(N==3&&K==1){
            cout << "YES\n";
            continue;
        }
        else if(N==4&&K==1){
            cout << "YES\n";
            continue;
        }
        long long ans = (K * (K + 1)) / 2 + K;
        
        if (N >= ans) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
