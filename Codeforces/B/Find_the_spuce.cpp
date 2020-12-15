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
	ll t;
cin>>t;
	while(t--)
    {
       ll n,m;
       cin>>n>>m;
       char a[n][m];
 
       for(ll i=0 ; i<n ; i++)
       {
           for(ll j=0 ; j<m ; j++)
           {
               cin>>a[i][j];
           }
       }
       ll b[n][m];
       for(ll i=0 ; i<n ; i++)
       {
           for(ll j=0 ; j<m ; j++)
           {
               if(a[i][j]=='*')
               {
                   b[i][j]=1;
               }
               else
               {
                   b[i][j]=0;
               }
           }
       }
       for(ll i=n-2 ; i>=0 ; i--)
       {
           for(ll j=m-2 ; j>=1 ; j--)
           {
               if(b[i][j]==1)
               {
                   b[i][j]=min(b[i+1][j-1],min(b[i+1][j],b[i+1][j+1]))+1;
               }
           }
       }
         ll ans=0;
       for(ll i=0 ; i<n ; i++)
       {
           for(ll j=0 ; j<m ; j++)
           {
//               cout<<b[i][j]<<" ";
ans+=b[i][j];
           }
//           cout<<endl;
       }
       cout<<ans<<endl;
 
 
    }
	return 0;
}