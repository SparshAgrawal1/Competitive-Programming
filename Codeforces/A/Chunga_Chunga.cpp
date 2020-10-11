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
 
   ll a,b,k;
   cin>>a>>b>>k;
   ll ans=0;
   ans+=a/k;
   ans+=b/k;
   a=a%k;
   b=b%k;
   if(a>b)
   {
       ll temp=k-a;
       if(b>=temp)
       {
           cout<<ans+1<<" "<<temp<<endl;
       }
       else
       {
           cout<<ans<<" "<<0<<endl;
       }
 
   }
   else if(b>a)
   {
       ll temp=k-b;
       if(a>=temp)
       {
           cout<<ans+1<<" "<<temp<<endl;
       }
       else
       {
           cout<<ans<<" "<<0<<endl;
       }
   }
   else
   {
       ll temp=k-a;
       if(b>=temp)
       {
           cout<<ans+1<<" "<<temp<<endl;
       }
       else
       {
           cout<<ans<<" "<<0<<endl;
       }
   }
}
 
int main()
{
    ll t=1;
//    cin>>t;
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}