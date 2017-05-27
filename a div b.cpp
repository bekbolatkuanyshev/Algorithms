#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int l1, i, s2, k, x, y;
string s1;

int main() {

        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);

    cin >> s1;
    cin >> s2;
        l1 = s1.size();
         for (i = 0; i < l1; i++)
          {
                
                x = x * 10 + (s1[i] - '0');
                if (x >= s2) cout << x / s2, y = 1; else
                if (y == 1) cout << 0;
                x %= s2; 
          }
          if (y == 0) cout<<0;
          cout << endl << x % s2;
    return 0;
}