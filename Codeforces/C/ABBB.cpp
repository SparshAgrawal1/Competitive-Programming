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
 
 
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.length();
        bool flag=false;
        ll cnt=0;
        for(ll i=0 ; i<n ; i++)
        {
            if(s[i]=='A')
            {
                cnt++;
            }
            else if(cnt>0)
            {
                cnt--;
            }
            else
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
 
 
    }
    return 0;
}