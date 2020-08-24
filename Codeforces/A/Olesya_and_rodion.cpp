#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
        fast;
 
        ll n,t;
        cin>>n>>t;
            if(t>=10&&n==1)
            {
                cout<<-1;
            }
            else
            {
                cout<<t;
            if(t<10)
            {
                for(ll i=1 ; i<n ; i++)
                {
                    cout<<0;
                }
            }
            else
            {
                for(ll i=1 ; i<n-1 ; i++)
                {
                    cout<<0;
                }
            }
            }
 
 
 
	return 0;
 
}