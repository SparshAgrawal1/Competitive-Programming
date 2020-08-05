#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(long long int n) 
{ 
 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (long long int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
} 
 
int main()
{
    
    int t;cin>>t;
    while(t--)
    {
       long long int x,y,a,b;
       cin>>x>>y;
       cin>>a>>b;
       if((x>0 && y<0) || (x<0 && y>0))
       {
           cout << (abs(x)+abs(y))*a << endl;
       }
       else
       {
           x= abs(x);
           y = abs(y);
           long long int z = min(x,y);
           long long int zz = max(x,y);
           zz = zz-z;
           long long int res = z*b;
           res+=(zz*a);
           res = min(res,(x+y)*a);
           cout << res << endl;
       }
        
    }
    return 0;
}