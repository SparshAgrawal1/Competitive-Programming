#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
	    ll n,k;
	    cin>>n>>k;
	    vector<ll> a;
        vector<ll> a1;
        vector<ll> a2;
	    for(int i=0;i<n;i++)
	    {
	        ll q;
	        cin>>q;
	        a.push_back(q);
	        a1.push_back(q);
	    }
	    sort(a.begin(),a.end());
	    ll d=a[a.size()-1];
	    for(int i=0;i<n;i++)
	    {
	        a1[i]=d-a1[i];
	        a2.push_back(a1[i]);
	    }
	    vector<ll> b;
	    sort(a2.begin(),a2.end());
	    d=a2[a2.size()-1];
	    for(int i=0;i<n;i++)
	    {
	        b.push_back(d-a1[i]);
	    }
	    if(k%2)
	    {
	        for(int i=0;i<n;i++)
	        {
	        cout<<a1[i]<<" ";
	        }
	    }
	    else
	    {
	        for(int i=0;i<n;i++)
	        {
	        cout<<b[i]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}