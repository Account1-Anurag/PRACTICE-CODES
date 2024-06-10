#include <bits/stdc++.h>
using namespace std;
bool isvowel(char anu)
{
    return anu=='a'||anu=='e';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string anurag;
        cin >> anurag;
        string ans = "";
        for (int i = n - 1; i >= 0; i--)
        {
            if (isvowel(anurag[i]) && (!isvowel(anurag[i - 1])))
            {
                ans += anurag[i];
                ans += anurag[i - 1];
                ans += '.';
                i--;
            }
            else
            {
                ans += anurag[i];
            }
        }
        ans.pop_back();
        reverse(ans.begin(), ans.end());
        
        cout << ans<<endl;
    }
    return 0;
}