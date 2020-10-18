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
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        char a[n][n];
        for(ll i=0 ; i<n ; i++)
        {
            for(ll j=0 ; j<n ; j++)
            {
                cin>>a[i][j];
 
            }
 
        }
        if(a[0][1]=='0'&&a[1][0]=='0')
        {
            if(a[n-1][n-2]=='0'&&a[n-2][n-1]=='0')
            {
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<2<<" "<<1<<endl;
            }
            else if(a[n-1][n-2]=='0'&&a[n-2][n-1]=='1')
            {
                  cout<<1<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else if(a[n-1][n-2]=='1'&&a[n-2][n-1]=='0')
            {
                 cout<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else if(a[0][1]=='1'&&a[1][0]=='1')
        {
            if(a[n-1][n-2]=='0'&&a[n-2][n-1]=='0')
            {
                cout<<0<<endl;
 
            }
            else if(a[n-1][n-2]=='0'&&a[n-2][n-1]=='1')
            {
                  cout<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else if(a[n-1][n-2]=='1'&&a[n-2][n-1]=='0')
            {
                 cout<<1<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else
            {
                cout<<2<<endl;
                cout<<n<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
         else if(a[0][1]=='0'&&a[1][0]=='1')
        {
            if(a[n-1][n-2]=='0'&&a[n-2][n-1]=='0')
            {
                cout<<1<<endl;
                cout<<1<<" "<<2<<endl;
 
            }
            else if(a[n-1][n-2]=='0'&&a[n-2][n-1]=='1')
            {
                  cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else if(a[n-1][n-2]=='1'&&a[n-2][n-1]=='0')
            {
                 cout<<2<<endl;
                cout<<2<<" "<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else
            {
                cout<<1<<endl;
                cout<<2<<" "<<1<<endl;
            }
        }
        else
        {
            if(a[n-1][n-2]=='0'&&a[n-2][n-1]=='0')
            {
                cout<<1<<endl;
                cout<<2<<" "<<1<<endl;
 
            }
            else if(a[n-1][n-2]=='0'&&a[n-2][n-1]=='1')
            {
                  cout<<2<<endl;
                cout<<2<<" "<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else if(a[n-1][n-2]=='1'&&a[n-2][n-1]=='0')
            {
                 cout<<2<<endl;
                cout<<2<<" "<<1<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else
            {
                cout<<1<<endl;
                cout<<1<<" "<<2<<endl;
            }
        }
 
 
 
 
    }
    return 0;
}
