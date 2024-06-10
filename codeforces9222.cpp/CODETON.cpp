#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     int n;
     // cout << "ENTER SIZE OF ARRAY";
     cin >> n;
     int a[n];
     for (int i = 0; i < n; i++)
     {
          cin >> a[i];
     }
     int abhishek, abhishekk;
     int p, q, r;
     p = a[0];
     for (int i = 1; i < n - 1; i++)
     {
          p = max(p, a[i]);
     }
     cout << p << endl;

     for (int i = 0; i < n - 1; i++)
     {
          if (p >= a[i])
          {
               abhishek = i;
          }
     }

     if (abhishek == n - 2)
     {
          cout << a[n - 1];
          return 0;
     }

     abhishek++;

     q = a[abhishek];
     for (int i = abhishek; i < n - 1; i++)
     {
          q = max(q, a[i]);
     }
     cout << q << endl;

     for (int i = abhishek; i < n - 1; i++)
     {
          if (q >= a[i])
          {

               abhishekk = i;
          }
     }
     if (abhishekk == n - 2)
     {
          cout << a[n - 1];
          return 0;
     }

     abhishekk++;

     r = a[abhishekk];
     for (int i = abhishekk; i < n - 1; i++)
     {
          r = max(r, a[i]);
     }
     cout << r << endl;
}