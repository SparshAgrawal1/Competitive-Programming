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
       ll n,i,x,j;
		cin>>n;
		ll a[n],b[n],swp[n]={0};
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=n-2;i>=0;i--){
			for(j=i;j<n-1;j++){
				if(a[j]>a[j+1] && swp[j]==0){
					swap(a[j],a[j+1]);
					swp[j]=1;
				}
			}
		}
		for(i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<"\n";
 
    }
	return 0;
}