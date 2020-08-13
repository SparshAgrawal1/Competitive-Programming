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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll count1=0;
    ll count2=0;
    for(ll i=0 ; i<n ; i++)
    {
        if(s[i]=='L')
        {
            count1++;
        }
    }
    count2+=(n-count1);
    cout<<count1+count2+1<<endl;
 
	return 0;
}