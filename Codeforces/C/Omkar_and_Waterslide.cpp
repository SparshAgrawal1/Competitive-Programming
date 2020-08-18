#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v;
        for(ll i=0 ; i<n ; i++)
        {
            ll a;cin>>a;
            v.push_back(a);
        }
        reverse(v.begin(),v.end());
        ll count=0;
        ll i=0;
        for(ll i=0 ; i<n-1 ; i++)
        {
            if(v[i]<v[i+1])
            {
                count+=v[i+1]-v[i];
            }
 
 
        }
        cout<<count<<endl;
 
 
	}
	return 0;
}