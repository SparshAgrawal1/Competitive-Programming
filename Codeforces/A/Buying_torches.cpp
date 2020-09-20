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
 
 
 
void solve()
{
   ll a,b,c;
   cin>>a>>b>>c;
   ll l=(((b*c)+c-1)%(a-1));
   ll h=(((b*c)+c-1)/(a-1));
   if(l!=0)
   {
       h++;
   }
   cout<<h+c<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}