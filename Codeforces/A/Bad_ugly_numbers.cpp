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
	int t;
	cin>>t;
	while(t--)
    {
       ll n;
       cin>>n;
       if(n==1)
       {
           cout<<-1<<endl;
       }
       else
       {
           cout<<2;
           for(ll i=1 ; i<n ; i++)
           {
               cout<<3;
           }
           cout<<endl;
 
       }
	}
	return 0;
}