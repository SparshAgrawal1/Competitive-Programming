#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
 
int main()
{
   ll n;
   cin>>n;
   ll a[n+1];
//   vect
   for(ll i=1; i<=n ; i++)
   {
       cin>>a[i];
   }
   for(ll i=1 ; i<=n ; i++)
   {
       bool b[n+1]={false};
       queue<ll> q;
       b[i]=true;
       q.push(a[i]);
       while(q.empty()==false)
       {
           ll curr=q.front();
           q.pop();
           if(b[curr]==false)
           {
               q.push(a[curr]);
               b[curr]=true;
               
           }
           else
           {
               cout << curr << " ";
               break;
           }
       }
   }
    return 0;
}