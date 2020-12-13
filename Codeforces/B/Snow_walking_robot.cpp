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
        string s;cin>>s;
        ll l=0,r=0,u=0,d=0;
        for(auto x:s)
        {
            if(x=='L')
            {
                l++;
            }
            else if(x=='R')
            {
                r++;
            }
            else if(x=='U')
            {
                u++;
            }
            else
            {
                d++;
            }
        }
        ll l1=min(l,r);
        ll l2=min(u,d);
        if(l1==0&&l2==0)
        {
            cout<<0<<endl;
        }
        else if(l1==0&&l2!=0)
        {
            cout<<2<<endl<<"UD"<<endl;
        }
        else if(l2==0&&l1!=0)
        {
            cout<<2<<endl<<"LR"<<endl;
        }
        else
        {
            cout<<2*(l1+l2)<<endl;
            for(ll i=0 ; i<l1 ; i++)
            {
                cout<<"L";
            }
            for(ll i=0 ; i<l2 ; i++)
            {
                cout<<"U";
            }
            for(ll i=0 ; i<l1 ; i++)
            {
                cout<<"R";
            }
            for(ll i=0 ; i<l2 ; i++)
            {
                cout<<"D";
            }
            cout<<endl;
        }
 
    }
 
	return 0;
}
