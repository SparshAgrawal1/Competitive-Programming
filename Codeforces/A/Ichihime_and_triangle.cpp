#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
    fast;
    ll t;
   cin>>t;
 
    while(t--)
    {
       ll a,b,c,d;
       cin>>a>>b>>c>>d;
       if(b+c>d)
       {
           cout<<b<<" "<<c<<" "<<d<<endl;
       }
       else
       {
           cout<<b<<" "<<c<<" "<<c<<endl;
       }
 
 
 
    }
    return 0;
}