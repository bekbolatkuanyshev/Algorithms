#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

int a[100000001],b[100000001],c[100000001];
int l1, l2, l3, i, j, k, q;
string s1, s2;

int main() {

	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);

  cin >> s1;
  cin >> s2;
  l1 = s1.size();
  l2 = s2.size();
  
  if (s1 == s2 && l1 == l2)
   {
     cout << 0;
     exit(0);
   }
  for (i = 0; i < l1;i++)
	  a[l1 - i - 1] = s1[i] - '0';
  for (j = 0; j< l2; j++)
      b[l2 - j - 1] = s2[j] - '0';
  for (i = 0; i < max(l1, l2); i++) 
  	{
  			if (a[i] >= b[i])
       		c[i] = a[i] - b[i];
	       		else
	     	{
{
	     		c[i] = (a[i] + 10) - b[i];
	     		a[i + 1] = a[i + 1] - 1;
}
            }
    }
          l3 = max(l1, l2) - 1;
       if (c[l3 + 1] > 0)
           l3++;
       if (c[l3] == 0) {
      for (i = l3 - 1; i >= 0; i--)
       cout << c[i]; }
            else
      for (i = l3; i >= 0; i--)
       cout << c[i];
return 0;
}
