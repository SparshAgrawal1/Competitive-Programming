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
ll num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3,
                        1, 2, 2, 3, 2, 3, 3, 4 };
 
 
ll countSetBitsRec(ll num)
{
    ll nibble = 0;
    if (0 == num)
        return num_to_bits[0];
    nibble = num & 0xf;
    return num_to_bits[nibble] + countSetBitsRec(num >> 4);
}
 
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll s;
        ll a;
        cin>>s>>n;
        for(ll i=1 ; i<n ; i++)
        {
            a=s;
            vector<ll> v;
            while(a/10!=0)
            {
                v.push_back(a%10);
                a/=10;
            }
            v.push_back(a);
            sort(v.begin(),v.end());
            if(v[0]==0)
            {
                break;
            }
            else
            {
                s=s+(v[0]*v[v.size()-1]);
            }
 
        }
        cout<<s<<endl;
 
    }
 
 
	}