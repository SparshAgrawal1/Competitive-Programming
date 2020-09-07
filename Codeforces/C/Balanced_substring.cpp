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
 
void solve()
{
    ll n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	ll l1=0;
	ll l2=0;
	ll l3=0;
	for(ll i=0 ; i<k ; i++)
    {
		if(s[i]=='0')
		{
		    l1++;
		}
		else if(s[i]=='1')
        {
            l2++;
        }
		else
        {
            l3++;
        }
	}
	if(l1!=l2 && min(l1,l2)+l3<max(l1,l2))
    {
		cout<<"NO"<<endl;
		return;
	}
 
	for(ll i=k; i<n;i++)
    {
		if(s[i-k]=='?')
		{
		    l3--;
		}
		else if(s[i-k]=='0')
        {
            l1--;
        }
		else
        {
            l2--;
        }
		if(s[i]=='?')
        {
			if(s[i-k]=='?')
			{
				l3++;
				continue;
			}
			else
			{
				s[i]=s[i-k];
				if(s[i-k]=='0')
				{
				    l1++;
				}
				else if(s[i-k]=='1')
                {
                    l2++;
                }
			}
		}
		else
        {
			if(s[i]=='1')
			{
			    l2++;
			}
			else if(s[i]=='0')
            {
                l1++;
            }
			if(s[i-k]=='?')
            {
				s[i-k]=s[i];
			}
			else if(s[i-k]!=s[i])
			{
				cout<<"NO"<<endl;
				return;
			}
		}
 
		if(l1!=l2 && min(l1,l2)+l3<max(l1,l2))
        {
			cout<<"NO"<<endl;
			return;
		}
 
	}
	cout<<"YES"<<endl;
	return;
}
 
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
