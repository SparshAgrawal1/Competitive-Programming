#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> v;
    v.push_back(m);
    while(n!=m && m>0)
    {
    	if(m%2==0)
    	{
    		m=m/2;
    		v.push_back(m);
    	}
    	else if(m%10==1)
    	{
    		m=m/10;
    		v.push_back(m);
    	}
    	else
    	{
    		break;
    	}
    }
    if(n==m)
    {
    	cout << "YES" << endl;
    	cout << v.size() << endl;
    	reverse(v.begin(),v.end());
    	for(auto x:v)
    	{
    	    cout << x << " ";
    	}
    	cout << endl;
    }
    else
    {
    	cout << "NO" << endl;
    }
    return 0;
}