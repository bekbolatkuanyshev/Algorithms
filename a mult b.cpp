#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;
int a[111], b[111], c[11001], l1, l2, l3;
int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int i, j;
string s1, s2;
cin >> s1;
    cin >> s2;
        l1 = s1.size();
        l2 = s2.size();
         
        for(i = 0; i < l1; i++)
                a[l1 - i] = s1[i] - '0';
            for(i = 0; i < l2; i++)
                b[l2 - i] = s2[i] - '0';
                  
                       for(i = 1; i <= l1; i++)
                         for(j = 1; j <= l2; j++)
                       {                         
                             c[i + j - 1] = c[i + j - 1] + (a[i] * b[j]);                                                                          
                             c[i + j] = c[i + j] + (c[i + j - 1] / 10);
                             c[i + j - 1] = c[i + j - 1] % 10;                                 
                       }
                       l3 = l1 + l2;
                  while(c[l3] == 0 && l3 > 0) l3--;
       for(i = l3; i >= 1; i--)
           cout << c[i];
           if (l3 == 0) cout<<0;
    return 0;
}
