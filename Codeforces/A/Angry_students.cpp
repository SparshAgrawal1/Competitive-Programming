#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
 
 
int main(){
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        set<ll> s1;
        set<ll> s2;
        for(ll i=0 ; i<n ; i++)
        {
            if(s[i]=='A')
            {
                s1.insert(i+1);
            }
            else
            {
                s2.insert(i+1);
            }
        }
        ll count=0;
        bool flag=true;
        while(flag==true)
        {
            ll k=0;
            ll p = s1.size();
            vector<ll> v;
            for(auto x:s1)
            {
                ll curr=x;
                if(s2.find(curr+1)!=s2.end())
                {
                    curr++;
                    s2.erase(curr);
                    v.push_back(curr);
                }
                else
                {
                    k++;
                }
            }
            count++;
            if(k==p)
            {
                flag=false;
            }
            s1.clear();
            for(ll i=0 ; i<v.size() ; i++)
            {
                s1.insert(v[i]);
            }
            
        }
        cout << count-1 << endl;
}
    return 0;
}