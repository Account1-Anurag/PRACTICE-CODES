#include <bits/stdc++.h>

using namespace std;

string SmallString(long long n, const string &s)
{
    int l = s.length();
    string rev=s;
    reverse(rev.begin(),rev.end());

    if (s <= rev)
    {
        return s;
    }

    // else if (s[0] == s[l - 1])
    // {
    //     int i = 0;
    //     int j = l - 1;
    //     while (s[i] == s[j]&&j>i)
    //     {
    //         i++;
    //         j--;
    //         if(s[j]==s[i]){
    //             continue;
    //         }
    //         else if (s[j] > s[i])
    //         {
    //             return s;
    //         }
    //         else
    //         {
    //             string reversed = s;
    //             reverse(reversed.begin(), reversed.end());
    //             return reversed + s;
    //         }
    //     }
    //     return s;
    // }
    else
    {
        string reversed = s;
        reverse(reversed.begin(), reversed.end());
        return reversed + s;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        string s;
        cin >> s;

        cout << SmallString(n, s) << endl;
    }

    return 0;
}
// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// string SmallString(int n, const string& s) {
//     string doubled = s + s;
//     string reversed_doubled = s;
//     reverse(reversed_doubled.begin(), reversed_doubled.end());
//     reversed_doubled += reversed_doubled;

//     return min(doubled, reversed_doubled);
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         cout << SmallString(n, s) << endl;
//     }

//     return 0;
// }
