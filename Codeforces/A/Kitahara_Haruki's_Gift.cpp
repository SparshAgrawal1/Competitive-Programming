#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
 
 
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll count1=0;
	ll count2=0;
	for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        if(a[i]==100)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    ll x=100*count1;
    ll y=200*count2;
    if(x==y)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(count1==0 )
        {
            if(count2%2!=0)
            cout << "NO" << endl;
            else
            cout << "YES"<<endl;
        }
        else
        {
            if((abs(x-y)/100)%2==0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
        }
 
    }
 
 
 
 
 
	return 0;
}