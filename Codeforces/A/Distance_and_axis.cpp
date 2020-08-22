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
bool sortbysecdesc(const pair<int,int> &a, const pair<int,int> &b)
{
        return (a.first-a.second)<(b.first-b.second);
}
 
int main()
{
        fast;
       ll t;
       cin>>t;
       while(t--)
       {
           ll n,k;
           cin>>n>>k;
           if(k>n)
           {
               cout<<k-n<<endl;
           }
           else
           {
               if(k%2==n%2)
               {
                   cout<<0<<endl;
               }
               else
               {
                   cout<<1<<endl;
               }
           }
       }
	return 0;
 
}