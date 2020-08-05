#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
 
int main()
{
   ll n;
   cin>>n;
   vector<ll>  a[n+1];
   vector<ll> b;
   ll l=1;
   while(n--)
   {
       ll x;
       cin>>x;
       if(x==-1)
       {
           b.push_back(l);
           l++;
       }
       else
       {
           a[x].push_back(l);
           l++;
       }
   }
   queue<ll> q;
   for(auto x:b)
   {
       q.push(x);
   }
   ll ans=0;
   while(q.empty()==false)
   {
    //   ans++;
       ll z = q.size();
       for(ll k=0 ; k<z ; k++)
       {
           ll curr=q.front();
           q.pop();
           for(auto y:a[curr])
           {
               q.push(y);
           }
       }
       ans++;
   }
   cout << ans<< endl;
 
    
//   cout << s.size() << endl;
    
    return 0;
}
