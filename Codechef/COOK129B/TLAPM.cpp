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

bool sbs(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}

bool isPrime(ll num)
{
    bool flag=true;
    for(ll i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int main()
{
    fast;
	ll t;
    cin>>t;
	for(ll _=1 ; _<=t ; _++)
    {
        ll a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        vector<ll> v1;
        vector<ll> v2;
        ll l=1;
        ll k=2;
        for(ll i=1 ; i<b1 ; i++)
        {
            l+=k;
            k++;
        }
        k--;
        for(ll j=1 ; j<=b2 ; j++)
        {
            v2.push_back(l);
            l+=k;
            k++;
        }
        l=1;
        k=1;
        for(ll i=1 ; i<a2 ; i++)
        {
            l+=k;
            k++;
        }
        k++;
        for(ll i=1 ; i<=b1 ; i++)
        {
            v1.push_back(l);
            l+=k;
            k++;
        }
        ll ans=0;
       for(ll i=a1-1 ; i<v1.size() ; i++)
       {
//           cout<<v1[i]<<" ";
ans+=v1[i];
       }
//       cout<<endl;
       for(ll j=a2 ; j<v2.size() ; j++)
       {
//           cout<<v2[j]<<" ";
ans+=v2[j];
       }


       cout<<ans<<endl;

    }


	return 0;
}