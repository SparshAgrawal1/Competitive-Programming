#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n+1];
	    unordered_map<ll,ll> m;
	    bool flag=false;
	    for(ll i=1 ; i<=n ; i++)
	    {
	        cin>>a[i];
	        if(m.find(a[i])!=m.end())
	        {
	            flag=true;
	            m[a[i]]++;
	        }
	        else
	        {
	            m[a[i]]++;
	        }
	    }
	    if(flag==true)
	    {
	        cout << "NO" << endl;
	    }
	    else
	    {
	        bool curr=false;
	        for(ll i=1 ; i<=n ; i++)
	        {
	            ll l=a[i];
	            for(ll j=i+1 ; j<=n ; j++)
	            {
	                l=l|a[j];
	                if(m.find(l)!=m.end())
	                {
	                    curr=true;
	                    break;
	                }
	                else
	                {
	                    m[l]++;
	                }
	            }
	        }
	        if(curr==false)
	        {
	            cout << "YES" <<endl;
	        }
	        else
	        {
	            cout << "NO" <<endl;
	        }
	    }
	    
	}
	return 0;
}