#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int a[1000001],b[1000001],c[1000001];
int l1, l2, l3, i, j, q = 1;
string s1, s2;

int main() {

	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);

	cin >> s1;
  l1 = s1.size();
  for (i = 0; i < l1; i++)
   {
      a[l1 - i - 1] = s1[i] - '0';
      b[0] = 1;
   }
  for (i = 0; i < l1; i++)
  {
       c[i] += a[i] + b[i];
      if (c[i] > 9) 
       {
       		c[i + 1] = c[i] / 10;
       		c[i] = c[i] % 10;
       } 
  }
          l3 = l1 - 1;
       if (c[l3 + 1]> 0)
           l3++;
   for (i = l3; i >= 0; i--)
       
       cout << c[i];
return 0;
}
