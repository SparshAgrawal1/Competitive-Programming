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
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(isPrime(n)==true)
        {
            cout<<"NO"<<endl;
        }
 
        else
        {
            vector<ll> v;
            bool flag=false;
            bool curr=false;
            for(ll i=2 ; i<=sqrt(n) ; i++)
            {
                if(n%i==0)
                {
                    v.push_back(i);
                    ll x=n/i;
                    if(isPrime(x)==true)
                    {
                        flag=true;
                        break;
                    }
                    else
                    {
                        for(ll j=i+1 ; j<=sqrt(x) ; j++)
                        {
                            if(x%j==0)
                            {
                                v.push_back(j);
                                v.push_back(x/j);
                                curr=true;
                                break;
                            }
                        }
                        if(curr==true)
                        {
                            break;
                        }
 
                    }
                    if(curr==true)
                    {
                        break;
                    }
 
                }
                if(curr==true)
                {
                    break;
                }
            }
            unordered_set<ll> s;
            for(auto x:v)
            {
                s.insert(x);
            }
            if(flag==true)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                if(s.size()==3)
                {
                    cout<<"YES"<<endl;
                    for(auto x:v)
                    {
                        cout<<x<<" ";
                    }
                    cout<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            cout<<endl;
        }
 
    }
 
	return 0;
}