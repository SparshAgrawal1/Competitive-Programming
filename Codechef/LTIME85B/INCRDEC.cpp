#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	int  t;
	cin>>t;
	while(t--)
	{
	    ll n;cin>>n;
	    ll a[n];
	    map<ll,ll> m;
	    map<ll,ll,greater<ll>> q;
	    
	    for(ll i=0 ; i<n ; i++)
	    {
	        cin>>a[i];
	        m[a[i]]++;
	        q[a[i]]++;
	    }
	    vector<ll> v;
	    ll l=0;
	    for(auto x:m)
	    {
	        v.push_back(x.first);
	       // m[x.first]--;
	       // cout << x.second << " ";
	        
	       // if(m[x.first]==0)
	       // {
	       //     m.erase(x.first);
	       // }
	    }
	    bool flag=true;
	    ll h=v.size()-1;
	    for(auto y:q)
	    {
	        if(y.second==2)
	        {
	            if(v[h]==y.first)
	            {
	                flag=false;
	                break;
	            }
	            else
	            {
	                v.push_back(y.first);
	                h++;
	            }
	        }
	        else if(y.second>2)
	        {
	            flag=false;
	            break;
	        }
	    }
	    if(flag==false)
	    {
	        cout << "NO" << endl;
	    }
	    else
	    {
	        if(v.size()!=n)
	        {
	            cout << "NO" << endl;
	        }
	        else
	        {
	            cout << "YES" << endl;
	            for(auto y:v)
	            {
	                cout << y << " ";
	            }
	            cout << endl;
	        }
	    }
	   // for(auto y:v)
	   // {
	   //     cout << y << " ";
	   // }
	   // cout << endl;
	}
	return 0;
}
