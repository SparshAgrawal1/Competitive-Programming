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
bool sbs(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
ll xxxx(ll a,ll b)
{
   while(a>b)
   {
       a=a/3;
   }
   return a;
}
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size())
    {
        cout<<"NO"<<endl;
    }
    else
    {
        ll ans=0;
        vector<ll> v;
        for(ll i=0 ; i<s1.size() ; i++)
        {
            if(s1[i]!=s2[i])
            {
                ans++;
                v.push_back(i);
            }
        }
        if(ans==0)
        {
            cout<<"YES"<<endl;
        }
        else if(ans==2)
        {
            if(s1[v[0]]==s2[v[1]]&&s1[v[1]]==s2[v[0]])
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
int main()
{
    fast;
	ll t;
	t=1;
//    cin>>t;
	while(t--)
    {
        solve();
 
    }
	return 0;
}