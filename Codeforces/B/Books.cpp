#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <algorithm>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
int atMostSum(ll arr[], ll n, ll k)
{
    int sum = 0;
    int cnt = 0, maxcnt = 0;
 
    for (ll i = 0; i < n; i++) {
 
 
        if ((sum + arr[i]) <= k) {
            sum += arr[i];
            cnt++;
        }
 
 
        else if(sum!=0)
        {
            sum = sum - arr[i - cnt] + arr[i];
        }
 
 
        maxcnt = max(cnt, maxcnt);
    }
    return maxcnt;
}
 
 
int main()
{
    fast;
    ll n,k;
    cin>>n>>k;
    ll a[n];
 
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
 
    }
    cout<<atMostSum(a,n,k);
 
 
	return 0;
}
