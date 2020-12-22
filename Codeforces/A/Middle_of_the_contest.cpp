#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
typedef double db;
 
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
 
}
void xxxx(ll a1,ll k)
{
    if(a1<10)
       {
           if(k<10)
           {
               cout<<"0"<<a1<<":"<<"0"<<k<<endl;
           }
           else
           {
               cout<<"0"<<a1<<":"<<k<<endl;
           }
 
       }
       else
       {
           if(k<10)
           {
               cout<<a1<<":"<<"0"<<k<<endl;
           }
           else
           {
               cout<<a1<<":"<<k<<endl;
           }
       }
}
void solve()
{
   string s1,s2;
   cin>>s1;
   cin>>s2;
   ll l1=s1[0]-'0';
   ll l2=s1[1]-'0';
   ll l3=s1[3]-'0';
   ll l4=s1[4]-'0';
   ll a1=(l1*10)+l2;
   ll a2=(l3*10)+l4;
 
   ll h1=s2[0]-'0';
   ll h2=s2[1]-'0';
   ll h3=s2[3]-'0';
   ll h4=s2[4]-'0';
   ll b1=(h1*10)+h2;
   ll b2=(h3*10)+h4;
   if(a1==b1)
   {
       ll k=(a2+b2)/2;
       xxxx(a1,k);
 
   }
   else
   {
       ll k2=60-a2;
       ll k1=a1+1;
       ll k3=b1-k1;
       ll k4=b2;
       ll k=k4+k2+(k3*60);
       k=k/2;
       if(k<k2)
       {
           a2+=k;
           k=0;
           xxxx(a1,a2);
 
       }
       else if(k==a2)
       {
           a2+=k;
           k=0;
           xxxx(a1+1,0);
       }
       else
       {
          a2=0;
          k-=k2;
          a1++;
          ll p=k/60;
          a1+=p;
          k=k-(p*60);
          a2+=k;
          xxxx(a1,a2);
       }
   }
}
int main()
{
    fast;
	ll t;
	t=1;
//    cin>>t;
	while(t--)
    {
        solve();
 
 
    }
	return 0;
}