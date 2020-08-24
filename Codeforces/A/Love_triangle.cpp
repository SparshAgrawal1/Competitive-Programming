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
 
       ll n;
       cin>>n;
       ll a[n+1];
       for(ll i=1 ; i<=n ; i++)
       {
           cin>>a[i];
       }
       ll curr=false;
       for(ll i=1 ; i<=n ; i++)
       {
           queue<ll> q;
           q.push(a[i]);
           ll count=0;
           bool flag=true;
           while(q.empty()==false)
           {
               ll temp=q.front();
               q.pop();
               count++;
               if(count<2)
               {
                   q.push(a[temp]);
               }
               else if(count==2&&a[temp]==i)
               {
                   flag=false;
                   break;
               }
               else
               {
                   break;
               }
 
           }
           if(flag==false)
           {
               cout<<"YES"<<endl;
               curr=true;
               break;
           }
       }
       if(curr==false)
       {
           cout<<"NO"<<endl;
       }
 
	return 0;
 
}