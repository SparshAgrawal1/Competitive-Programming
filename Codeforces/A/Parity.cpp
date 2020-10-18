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
    t=1;
    for(ll _ =1 ; _<=t ; _++)
    {
        ll b,k;
        cin>>b>>k;
        ll a[k];
        for(ll i=0 ; i<k ; i++)
        {
            cin>>a[i];
        }
        ll c1=0;
        ll c2=0;
        for(ll i=0 ; i<k-1 ; i++)
        {
            if(a[i]%2==0)
                c1++;
            else
                c2++;
        }
        if(b%2==0)
        {
            if(a[k-1]%2==0)
            {
 
                cout<<"even"<<endl;
            }
            else
            {
                cout<<"odd"<<endl;
            }
        }
        else
        {
            if(c2%2==0)
            {
                if(a[k-1]%2==0)
                {
 
                    cout<<"even"<<endl;
                }
                else
                {
                    cout<<"odd"<<endl;
                }
            }
            else
            {
                if(a[k-1]%2==0)
                {
 
                    cout<<"odd"<<endl;
                }
                else
                {
                    cout<<"even"<<endl;
                }
            }
        }
 
 
 
    }
    return 0;
}