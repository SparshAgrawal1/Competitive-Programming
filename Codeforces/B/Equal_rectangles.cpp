#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        vector<ll> v;
        ll curr=0;
        unordered_map<ll,ll> s;
        for(ll i=0 ; i<4*n ; i++)
        {
            ll a;cin>>a;
            curr=curr^a;
            v.push_back(a);
            s[a]++;
            
        }
        if(curr!=0)
        {
            cout << "NO" <<endl;
        }
        else
        {
            vector<ll> q;
            ll ans=1;
            for(auto y:s)
            {
                
                ll t1=y.first;
                ll t2=y.second;
                while(t2>0)
                {
                    q.push_back(t1);
                    ans=ans*t1;
                    t2=t2-2;
                }
            }
            sort(q.begin(),q.end());
            ll l=0;
            ll h=q.size()-1;
            ll temp=-1;
            bool ss=false;
            while(l<h)
            {
                if(q[l]*q[h]==temp || temp==-1 )
                {
                    temp=q[l]*q[h];
                    l++;
                    h--;
                }
                else
                {
                    ss=true;
                    break;
                }
                
            }
            if(ss==true)
            {
                cout << "NO" <<endl;
            }
            else
            {
                cout << "YES" <<endl;
            }
        }
        
        
    }
    return 0;
}