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
 
bool isPrime(ll num)
{
    bool flag=true;
    for(ll i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
 
bool sortbyvec(vector<double> v1,vector<double> v2)
{
    return v1[2]>v2[2];
}
//ll knapSack(ll W, ll wt[], ll v[], ll n)
//{
//    ll dp[n + 1][W + 1];
//   for(ll i=0; i<=W; i++)
//   {
//       dp[0][i] = 0;
//   }
//   for(ll i=0; i<=n; i++)
//   {
//       dp[i][0] = 0;
//   }
//    for (ll i = 1; i <= n; i++)
//    {
//        for (ll j = 1; j <= W; j++)
//        {
//           if (wt[i - 1] > j)
//                dp[i][j] = dp[i-1][j];
//            else
//                dp[i][j] = max(v[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
//        }
//    }
//
//    return dp[n][W];
//}
 
void tsp(vector<vector<ll>> &v,vector<bool> &vis,ll pos,ll n,ll c,ll cost,ll &ans)
{
    if(c==n && v[pos][0])
    {
        ans =min(ans,cost+v[pos][0]);
        return;
    }
    for(ll i=0;i<n;i++)
    {
        if(!vis[i] && v[pos][i])
        {
            vis[i]=true;
            tsp(v,vis,i,n,c+1,cost+v[pos][i],ans);
            vis[i]=false;
        }
    }
}
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(b==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<a*b<<" "<<a<<" "<<a*b+a<<endl;
    }
 
 
}
 
int main()
{
    fast;
	ll t;
    cin>>t;
	while(t--)
    {
        solve();
    }
 
 
	return 0;
}