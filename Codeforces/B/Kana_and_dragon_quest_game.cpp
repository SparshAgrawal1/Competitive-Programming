#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
// #include <cmath>
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
        long long int x,n,m;
        cin>>x>>n>>m;
        if(x<=10 && m>0)
        {
            cout << "YES" << endl;
        }
        else
        {
            while(n--)
            {
                x = floor(x/2) + 10;
            }
            if(x<=10*m)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}