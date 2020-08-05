#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;
 
int main() 
{
    ll n;
    cin>>n;
    ll a[n];
    ll e=0;
    ll o=0;
    vector<ll> v1,v2;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            e++;
            v1.push_back(a[i]);
        }
        else
        {
            o++;
            v2.push_back(a[i]);
        }
    }
    if(abs(e-o)<=1)
    {
        cout << 0 << endl;
    }
    else
    {
        if(e>o)
        {
            ll x=e-o;
            x--;
            sort(v1.begin(),v1.end());
            ll count=0;
            for(ll i=0 ; i<v1.size() ; i++)
            {
                count+=v1[i];
                x--;
                if(x==0)
                {
                    break;
                }
                
            }
            cout << count << endl;
        }
        else if(o>e)
        {
            ll x=o-e;
            x--;
            sort(v2.begin(),v2.end());
            ll count=0;
            for(ll i=0 ; i<v2.size() ; i++)
            {
                count+=v2[i];
                x--;
                if(x==0)
                {
                    break;
                }
                
            }
            cout << count << endl;
        }
    }
    
    
    return 0;
}
