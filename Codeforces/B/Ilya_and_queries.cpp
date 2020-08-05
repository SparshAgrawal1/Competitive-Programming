#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
    fast;
    string s;
    cin>>s;
    ll m;
    cin>>m;
    ll count=0;
    ll b[s.length()];
    for(ll i=0 ; i<s.length() ; i++)
    {
        b[i]=count;
 
            if(s[i]==s[i+1])
            {
                count++;
            }
    }
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<b[y-1]-b[x-1]<<endl;
    }
 
 
	return 0;
}
