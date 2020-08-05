#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main()
{
    ll n;
    cin>>n;
    string s;cin>>s;
    map<ll,ll> m;
    for(ll i=0 ; i<n ; i++)
    {
        m[s[i]]++;
    }
    ll curr=int(s[0]);
    ll temp=curr;
    bool flag=false;
    for(ll i=1 ; i<n ; i++)
    {
        if(int(s[i])<curr)
        {
            s.erase(i-1,1);
            flag=true;
            break;
        }
        else
        {
            curr=int(s[i]);
        }
    }
    if(flag==true)
    cout << s << endl;
    else
    {
        if(curr==temp)
        {
            s.erase(0,1);
        }
        else
        {
            s.erase(n-1,1);
        }
        cout << s <<endl;
    }
    return 0;
}