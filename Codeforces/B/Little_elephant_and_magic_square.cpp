#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
typedef double db;
 
 
int main()
{
    fast;
 
    ll a[3][3];
    for(ll i=0 ; i<3 ; i++)
    {
        for(ll j=0 ; j<3 ; j++)
        {
            cin>>a[i][j];
        }
    }
    ll count1=0,count2=0,count3=0;
    count1+=a[0][1]+a[0][2];
    count2+=a[1][0]+a[1][2];
    count3+=a[2][0]+a[2][1];
    ll x,y,z;
    x=(count2+count3-count1)/2;
    y=(count1+count3-count2)/2;
    z=(count1+count2-count3)/2;
    a[0][0]=x;
    a[1][1]=y;
    a[2][2]=z;
    for(ll i=0 ; i<3 ; i++)
    {
        for(ll j=0 ; j<3 ; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
 
	return 0;
 
}