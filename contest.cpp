#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int x = (n / (k + 1));
        int y = (x * (k + 1));
        int z = n - y;
        cout << x + z<<endl;
    }
    return 0;
}
