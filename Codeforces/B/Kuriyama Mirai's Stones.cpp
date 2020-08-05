#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
 
 
int main()
{
	ll n;
	cin>>n;
	vector<ll> v;
	ll b[n]={0},c[n]={0};
	for(ll i=0 ; i<n ; i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
 
    }
    b[0]=v[0];
    for(ll i=1 ; i<n ; i++)
    {
        b[i]=v[i]+b[i-1];
    }
    sort(v.begin(),v.end());
//    for(auto x:v)
//    {
//        cout << x << " ";
//    }
//    cout << endl;
    c[0]=v[0];
    for(ll i=1 ; i<n ; i++)
    {
        c[i]=v[i]+c[i-1];
    }
    ll k;cin>>k;
    while(k--)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        if(x==1)
        {
//            ll count=0;
            if(y==1)
            {
                cout << b[z-1] << endl;
            }
            else
            {
                cout << b[z-1]-b[y-2]<<endl;
            }
        }
 
//            cout << count << endl;
 
        else
        {
//             ll count=0;
             if(y==1)
            {
                cout << c[z-1] << endl;
            }
            else
            {
                cout << c[z-1]-c[y-2]<<endl;
            }
//             cout << count << endl;
        }
    }
//    for(ll i=0 ; i<n ; i++)
//    {
//        cout << b[i] <<" ";
//    }
//    cout << endl;
//    for(ll i=0  ; i<n ; i++)
//    {
//        cout << c[i] << " ";
//    }
//    cout << endl;
 
 
	return 0;
}