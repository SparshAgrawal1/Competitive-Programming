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
 
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
       ll n;
       cin>>n;
       vector<pair<ll,ll>> v;
       for(ll i=0 ; i<n ; i++)
       {
           ll a,b;
           cin>>a>>b;
           v.push_back({a,b});
       }
       ll flag=false;
       for(ll i=0 ; i<n ; i++)
       {
           if(v[i].first<v[i].second)
           {
               flag=true;
               break;
           }
       }
       if(flag==true)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           if(n==1)
           {
               cout<<"YES"<<endl;
           }
           else
           {
                for(ll i=0 ; i<n-1 ; i++)
                {
                   ll l1=v[i].first;
                   ll h1=v[i].second;
                   ll l2=v[i+1].first;
                   ll h2=v[i+1].second;
                   ll h=h2-h1;
                   ll l=l2-l1;
                   if(l<h||h2<h1||l2<l1)
                   {
                       flag=true;
                       break;
                   }
 
                }
                if(flag==true)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }
           }
 
       }
	}
	return 0;
}