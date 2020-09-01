#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
 
        return (a.first > b.first);
 
 
 
}
 
int main()
{
    fast;
    int n,k,a[100000],sum=0,mini=INT_MAX;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]<0&&k>0)
            a[i]*=-1,k--;
        sum+=a[i];
        mini=min(mini,a[i]);
    }
    if(k%2==1)
        sum-=(2*mini);
    cout<<sum<<endl;
    return 0;
	return 0;
}