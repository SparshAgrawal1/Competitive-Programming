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
 
bool isSubSequence(string s1, string s2, ll m, ll n)
{
    if (m == 0) return true;
    if (n == 0) return false;
 
    if (s1[m-1] == s2[n-1])
        return isSubSequence(s1, s2, m-1, n-1);
 
    return isSubSequence(s1, s2, m, n-1);
}
 
void solve()
{
    ll n;cin>>n;
    string s;cin>>s;
    vector<ll> v1,v2;
    for(ll i=0 ; i<n ; i++)
    {
        ll l=s[i]-'0';
        if((i+1)%2==0)
        v1.push_back(l);
        else
        v2.push_back(l);
    }
    if(v1.size()==0)
    {
        ll l=0;
        for(ll i=0 ; i<v2.size() ; i++)
        {
            if(v2[i]%2==0)
            {
               l++;
            }
        }
        if(l==v2.size())
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    else if(v2.size()==0)
    {
        ll l=0;
        for(ll i=0 ; i<v1.size() ; i++)
        {
            if(v2[i]%2!=0)
            {
                l++;
            }
        }
        if(l==v2.size())
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    else
    {
        if(n%2==0)
        {
            ll l=0;
            for(ll i=0 ; i<v1.size() ; i++)
            {
                if(v1[i]%2!=0)
                {
                    l++;
                }
            }
            if(l==v1.size())
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        else
        {
            ll l=0;
            for(ll i=0 ; i<v2.size() ; i++)
            {
                if(v2[i]%2==0)
                {
                    l++;
                }
            }
            if(l==v2.size())
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
    }
 
 
}
 
 
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        solve();
    }
 
 
    return 0;
}