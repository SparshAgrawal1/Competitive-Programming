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
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v;
        unordered_set<ll> s;
        for(ll i=0 ; i<n ; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
            s.insert(a);
        }
        if(s.size()==1)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
 
    }
	return 0;
 
}