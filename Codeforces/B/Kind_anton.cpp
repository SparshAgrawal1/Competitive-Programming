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
ll num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3,
                        1, 2, 2, 3, 2, 3, 3, 4 };
 
 
ll countSetBitsRec(ll num)
{
    ll nibble = 0;
    if (0 == num)
        return num_to_bits[0];
    nibble = num & 0xf;
    return num_to_bits[nibble] + countSetBitsRec(num >> 4);
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
        ll a[n],b[n];
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        for(ll i=0 ; i<n ; i++)
        {
            cin>>b[i];
        }
        if(a[0]!=b[0])
        {
            cout<<"NO"<<endl;
        }
 
        else
        {
            bool x[3]={false};
            if(a[0]==1)
            {
                x[2]=true;
            }
            else if(a[0]==-1)
            {
                x[0]=true;
            }
            else if(a[0]==0)
            {
                x[1]=true;
            }
            bool flag=false;
            for(ll i=1 ; i<n ; i++)
            {
                if(a[i]>b[i])
                {
                    if(x[0]==false)
                    {
                        flag=true;
                        break;
                    }
                    else
                    {
                        if(a[i]==1)
                        {
                            x[2]=true;
                        }
                        else if(a[i]==-1)
                        {
                            x[0]=true;
                        }
                        else if(a[i]==0)
                        {
                            x[1]=true;
                        }
                    }
                }
                else if(a[i]<b[i])
                {
                    if(x[2]==false)
                    {
                        flag=true;
                        break;
                    }
                    else
                    {
                        if(a[i]==1)
                        {
                            x[2]=true;
                        }
                        else if(a[i]==-1)
                        {
                            x[0]=true;
                        }
                        else if(a[i]==0)
                        {
                            x[1]=true;
                        }
                    }
                }
                else if(a[i]==b[i])
                {
                        if(a[i]==1)
                        {
                            x[2]=true;
                        }
                        else if(a[i]==-1)
                        {
                            x[0]=true;
                        }
                        else if(a[i]==0)
                        {
                            x[1]=true;
                        }
                }
            }
            if(flag==false)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
 
	return 0;
}