#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
 
 
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        ll zeros = 0;
        map<ll,ll> r;
        for(int i=0;i<n;i++)
        {
            if((arr[i]%k) == 0)
            {
                zeros++;
                continue;
            }
            r[k -(arr[i]%k)]++;
        }
        if(zeros == n)
        {
            cout << 0 << endl;
        }
        else
        {
        ll ans = 0;
        for(auto x : r)
        {
            ll z = x.first;
            if(x.second >= 2)
            {
                z+= (x.second-1)*k;
            }
            ans = max(ans,z);
        }
        ans++;
        cout << ans << '\n';
        }
    }
 
    return 0;
}