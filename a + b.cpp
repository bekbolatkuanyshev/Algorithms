#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int a[1000001],b[1000001],c[1000001];
int l1, l2, l3, i, j;
string s1, s2;

int main() {

	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);

	cin >> s1;
  cin >> s2;
  l1 = s1.size();
  l2 = s2.size();
  for (i = 0; i < l1;i++)
			a[l1 - i - 1] = s1[i] - '0';
  for (j = 0; j< l2; j++)
      b[l2 - j - 1] = s2[j] - '0';
  for (i = 0; i < max(l1, l2); i++) 
  {
       c[i] = c[i] + a[i] + b[i];
      if (c[i] > 9) 
       {
       		c[i + 1] = c[i] / 10;
       		c[i] = c[i] % 10;
			 } 
  }
          l3 = max(l1, l2) - 1;
       if (c[l3 + 1]> 0)
           l3++;
   for (i = l3; i >= 0; i--)
       cout << c[i];
return 0;
}
