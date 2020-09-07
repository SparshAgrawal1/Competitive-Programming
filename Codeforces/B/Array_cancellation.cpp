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
 
ll findSubarraySum(vector<ll> arr, ll n, ll sum)
{
 
    unordered_map<ll, ll> prevSum;
 
    int res = 0;
 
    int currsum = 0;
 
    for (ll i = 0; i < n; i++) {
 
 
        currsum += arr[i];
 
 
        if (currsum == sum)
            res++;
 
 
        if (prevSum.find(currsum - sum) != prevSum.end())
            res += (prevSum[currsum - sum]);
 
        prevSum[currsum]++;
    }
 
    return res;
}
 
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        vector<pair<ll,ll>> v1,v2;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
            if(a[i]>0)
            {
                v1.push_back({a[i],i});
            }
            else
            {
                v2.push_back({a[i],i});
            }
 
        }
        ll ans=0;
 
        for(ll i=0 ; i<n ; i++)
        {
            if(a[i]>0)
            {
                ans+=a[i];
            }
            else
            {
                ll curr=min(ans,abs(a[i]));
                ans-=curr;
                a[i]+=curr;
            }
        }
        cout<<ans<<endl;
 
    }
    return 0;
 
}