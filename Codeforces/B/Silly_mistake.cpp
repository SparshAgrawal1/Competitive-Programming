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
 
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    unordered_set<ll> s;
    ll curr=0;
    bool flag=false;
    vector<ll> v;
    ll k=0;
    for(ll i=0 ; i<n ; i++)
    {
        k++;
        curr+=a[i];
        if(a[i]>0)
        {
            if(s.find(a[i])==s.end())
            {
                s.insert(a[i]);
            }
            else
            {
                flag=true;
                break;
            }
        }
        else if(a[i]<0)
        {
            if(s.find(abs(a[i]))==s.end())
            {
                flag=true;
                break;
            }
        }
        if(curr==0)
        {
            s.clear();
            v.push_back(k);
            k=0;
        }
    }
    if(v.size()==0||flag==true||curr!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<v.size()<<endl;
        for(auto x:v)
        {
            cout<<x<<" ";
        }
    }
 
}
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
//    ll t;cin>>t;
//    while(t--)
//    {
        solve();
//    }
 
 
    return 0;
}