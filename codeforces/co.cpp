#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int ans = 0;
        string s;
        cin >> s;
        
        for (int i = 0; i < n; i++)
        {
              if (ans < 0)
            {
                break;
            }
            if (s[i] == '0')
            {
                ans--;
             
            }
            else
            {
                ans = x;
                
            }
          
        }
        
        if (ans >= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
