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
    ll a[k];
    vector<ll> v;
    for(ll i=0 ; i<k ; i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
//        s.insert(a[i]);
    }
    sort(v.begin(),v.end());
    if(k==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(v[0]==1||v[k-1]==n)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        ll count=0;
        bool flag=true;
        for(ll i=0 ; i<k-1 ; i++)
        {
            if(v[i+1]-v[i]==1)
            {
                count++;
            }
            else
            {
                if(count>=2)
                {
                    flag=false;
                    break;
                }
                count=0;
            }
        }
        if(count>=2)
        {
            flag=false;
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    }
 
 
 
	return 0;
}