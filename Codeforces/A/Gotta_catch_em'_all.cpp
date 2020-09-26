#include <bits/stdc++.h>
using namespace std;
#define f(i,a,n) for(i=a;i<n;i++)
 
#define pb push_back
#define c(a) cout<<a<<endl
#define fast ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define vi vector<int>
#define ld long double
typedef long long int ll;
 
void solve()
{
    string s;
    cin>>s;
    ll n=s.length();
    unordered_map<char,ll> m;
    for(ll i=0 ; i<n ; i++)
    {
        m[s[i]]++;
    }
    vector<pair<char,ll>> v;
    for(auto x:m)
    {
        if(x.first=='B'||x.first=='l'||x.first=='b'||x.first=='a'||x.first=='s'||x.first=='u'||x.first=='r')
        {
            v.push_back({x.first,x.second});
        }
    }
    ll y=v.size();
    ll ans=0;
    if(y<7)
    {
        cout<<ans;
    }
    else
    {
        vector<ll> g;
        for(ll i=0 ; i<v.size() ; i++)
        {
            if(v[i].first=='u'||v[i].first=='a')
            {
                g.push_back(v[i].second/2);
            }
            else
            {
                g.push_back(v[i].second);
            }
        }
        cout<<*min_element(g.begin(),g.end());
    }
 
}
int main()
{
	fast;
	solve();
	return 0;
}