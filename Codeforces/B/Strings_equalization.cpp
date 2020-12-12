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
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
int main()
{
	fast;
	ll t;
//	t=1;
	cin>>t;
	while(t--)
    {
 
        string s1,s2;
        cin>>s1;
        cin>>s2;
       bool flag=false;
        ll n=s1.length();
        for(ll i=0 ; i<n ;i++)
        {
            for(ll j=0 ; j<n ; j++)
            {
                if(s1[i]==s2[j])
                {
                    flag=true;break;
                }
            }
        }
        if(flag==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
 
    }
 
	return 0;
}