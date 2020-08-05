#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
 
 
int main()
{
	ll n,s;
	cin>>s>>n;
	vector<pair<ll,ll>> v;
	while(n--)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
//        if()
    }
    bool flag=false;
    sort(v.begin(),v.end());
    for(ll i=0 ; i<v.size() ; i++)
    {
        if(v[i].first<s)
        {
            s=s+v[i].second;
        }
        else
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
            cout << "YES" <<endl;
        }
	return 0;
}