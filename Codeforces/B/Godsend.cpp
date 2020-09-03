#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
 
    return (a.first > b.first);
 
 
 
}
ll num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3,
                        1, 2, 2, 3, 2, 3, 3, 4 };
 
 
ll countSetBitsRec(ll num)
{
    ll nibble = 0;
    if (0 == num)
        return num_to_bits[0];
    nibble = num & 0xf;
    return num_to_bits[nibble] + countSetBitsRec(num >> 4);
}
 
int main()
{
    fast;
    ll n;
    cin>>n;
   ll a[n];
   ll sum=0;
   ll x1=0;
   ll x2=0;
   for(ll i=0 ; i<n ; i++)
   {
       cin>>a[i];
       sum+=a[i];
       if(a[i]%2==0)
       {
           x1++;
       }
       else
       {
           x2++;
       }
   }
   if(sum%2!=0)
   {
       cout<<"First"<<endl;
   }
   else
   {
       if(x1==n)
       {
           cout<<"Second"<<endl;
       }
       else
       {
           cout<<"First"<<endl;
       }
   }
 
	return 0;
}