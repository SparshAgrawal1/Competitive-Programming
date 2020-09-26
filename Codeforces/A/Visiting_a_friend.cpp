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
   ll n,y;
   cin>>n>>y;
   vector<pair<ll,ll>> v;
   for(ll i=1 ; i<=n ; i++)
   {
       ll a1,a2;
       cin>>a1>>a2;
       v.push_back({a1,a2});
   }
   sort(v.begin(),v.end());
   ll a=v[0].first;
   ll b=v[0].second;
   bool flag=true;
   for(ll i=1 ; i<n ; i++)
   {
       if(v[i].first<=b&&v[i].first>=a)
       {
           b=max(b,v[i].second);
       }
       else
       {
           flag=false;
           break;
       }
   }
   if(y<a||y>b||a!=0)
   {
       flag=false;
   }
   if(flag==false)
   {
       cout<<"NO";
   }
   else
   {
       cout<<"YES";
   }
}
int main()
{
	fast;
	solve();
	return 0;
}