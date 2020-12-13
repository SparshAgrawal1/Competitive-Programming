#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
int main()
{
	fast;
	ll t;
//	t=1;
	cin>>t;
	while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        vector<ll> v;
        v.push_back(a);v.push_back(b);v.push_back(c);
        sort(v.begin(),v.end());
        ll l1=v[0];
        ll l2=v[1];
        ll l3=v[2];
        if(l1==l2&&l2==l3)
        {
            cout<<0<<endl;
        }
        else if(l1==l2&&l2!=l3)
        {
            if(l3==l2+1)
            {
                cout<<2*(l3-l2-1)<<endl;
            }
            else
            {
                cout<<2*(l3-l2-2)<<endl;
            }
 
        }
        else if(l1!=l2&&l2==l3)
        {
            if(l1==l2-1)
            {
                cout<<2*(l2-l1-1)<<endl;
            }
            else
            {
                cout<<2*(l2-l1-2)<<endl;
            }
        }
        else if(l1!=l2&&l2!=l3)
        {
            cout<<(l2-l1-1)+(l3-l2-1)+(l3-l1-2)<<endl;
        }
 
//        cout<<(l-v[0])+(v[2]-v[0])+(v[2]-l)<<endl;
    }
 
	return 0;
}