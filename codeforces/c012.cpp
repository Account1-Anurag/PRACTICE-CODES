#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string f;
        cin >> f;
        int x1 = 0;
        int x2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (f[i] == '0' && s[i] != f[i])
            {
                x1++;
            }
            else if (f[i] == '1' && s[i] != f[i])
            {
                x2++;
            }
        }
        if (x2 > x1)
        {
            cout << x2 << endl;
        }
        else
        {
            cout << x1 << endl;
        }
    }
    return 0;
}