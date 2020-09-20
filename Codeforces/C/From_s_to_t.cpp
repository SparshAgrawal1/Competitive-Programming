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
 
    string s;
    cin>>s;
    string t;
    cin>>t;
    string p;
    cin>>p;
    ll a[26]={0},b[26]={0};
    for(ll i=0 ; i<t.length() ; i++)
    {
        a[t[i]-'a']++;
    }
    for(ll i=0 ; i<s.length() ; i++)
    {
        b[s[i]-'a']++;
    }
    for(ll i=0 ; i<26 ; i++)
    {
        if(b[i]>a[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    ll c[26]={0};
    for(ll i=0 ; i<26 ; i++)
    {
        if(a[i]!=b[i])
        {
            c[i]=a[i]-b[i];
        }
    }
    ll d[26]={0};
    for(ll i=0 ; i<p.length() ; i++)
    {
        d[p[i]-'a']++;
    }
    for(ll i=0 ; i<26 ; i++)
    {
        if(d[i]<c[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    if(isSubSequence(s,t,s.length(),t.length())==false)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    return;
 
 
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 
    return 0;
}