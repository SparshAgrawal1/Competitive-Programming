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
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        for(ll i=n-1 ; i>=0 ; i--)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
 
    return 0;
 
}