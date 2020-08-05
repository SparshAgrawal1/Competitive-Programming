#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
      fast;
 
    ll t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
       unordered_map<ll,ll> m;
        for(ll i=0 ; i<n ; i++)
        {
 
            cin>>a[i];
            m[a[i]]++;
        }
        vector<pair<ll,ll>> v;
       for(auto x:m)
        {
            v.push_back({x.first,x.second});
        }
        unordered_set<ll> s;
        for(ll i=0 ; i<v.size() ; i++)
        {
            for(ll j=i ; j<v.size() ; j++)
            {
                s.insert(v[i].first+v[j].first);
            }
        }
        ll ans=INT_MIN;
        sort(a,a+n);
        for(auto x:s)
        {
            ll count=0;
            ll l=0;
            ll h=n-1;
            while(l<h)
            {
                if(a[l]+a[h]==x)
                {
                    count++;
                    l++;
                    h--;
                }
                else if(a[l]+a[h]<x)
                {
                    l++;
                }
                else
                {
                    h--;
                }
            }
            ans=max(ans,count);
        }
 
//        for(auto x:f)
//        {
//            ans=max(ans,x.second);
//        }
        cout<<ans<<endl;
//        ll l=0;
//        ll h=v.size()-1;
//        ll count1=0;
//        ll k=-1;
//        while(l<h)
//        {
//            if(v[l].first+v[h].first==k||k==-1)
//            {
//                k=v[l].first+v[h].first;
//                count1+=min(v[l].second,v[h].second);
//                l++;
//                h--;
//            }
//            else if(v[l].first+v[h].first<k)
//            {
//                l++;
//            }
//            else
//            {
//                h--;
//            }
//        }
//        ll count2=0;
//        l=0;
//        h=v.size()-1;
//        ll j=-1;
//        while(l<=h)
//        {
//            if(v[l].second>1)
//            {
//                if(2*v[l].first==j||j==-1)
//                {
//                    count2+=v[l].second/2;
//                    j=2*v[l].first;
//                }
//                else
//                {
//                    ll o=count2;
//                    count2=max(count2,v[l].second/2);
//                    if(o!=count2)
//                    {
//                        j=2*v[l].first;
//                    }
//                }
//
//            }
//            l++;
//        }
//        cout<<max(count1,count2)<<endl;
 
    }
    return 0;
 
}