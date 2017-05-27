#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

string s;
int j, n;
bool was[1001];
char a[1001];

void go (int x) {

    int i, j;
    if (x == s.size())
     {
       for (j = 0; j < s.size(); j++)
            cout << a[j];          
            cout << endl;
            return ;
     }
     for (i = 1; i <= s.size(); i++)
      {
         if (!was[i])
              {
                 was[i] = true;  
                 a[x] = s[i - 1];
                 go(x + 1);
                 was[i] = false;
              }
         }

}

int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);

        cin >> s;
        sort(s.begin(), s.end());
        go(0);

return 0;
}