#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
 
int main()
{
  ll n;
  cin>>n;
  ll a[n],b[n-1],c[n-2];
//   map<ll,ll> m1,m2,m3;
  for(ll i=0 ; i<n ; i++)
  {
      cin>>a[i];
    //   m1[a[i]]++;
  }
  sort(a,a+n);
  for(ll i=0 ; i<n-1 ; i++)
  {
      cin>>b[i];
    //   m2[b[i]]++;
  }
  sort(b,b+n-1);
//   for(ll i=0 ; i<n-1 ; i++)
//   {
//       if(m1.find(b[i])==m1.end())
//       {
//           cout << b[i] << endl;
//       }
//       else
//       {
//           if(m1[b[i]]!=m2[b[i]])
//           {
//               cout << b[i] << endl;
//           }
//       }
//   }
  
  for(ll i=0 ; i<n-2 ; i++)
  {
      cin>>c[i];
    //   m3[c[i]]++;
  }
  sort(c,c+n-2);
//   for(ll i=0 ; i<n-2 ; i++)
//   {
//       if(m2.find(c[i])==m2.end())
//       {
//           cout << c[i] << endl;
//       }
//       else
//       {
//           if(m2[c[i]]!=m3[c[i]])
//           {
//               cout << c[i] << endl;
//           }
//       }
//   }
bool flag1=false;
bool flag2=false;
for(ll i=0 ; i<n-1 ; i++)
{
    if(a[i]!=b[i])
    {
        flag1=true;
        cout << a[i] << endl;
        break;
    }
}
if(flag1==false)
{
    cout << a[n-1] << endl;
}
for(ll i=0 ; i<n-2 ; i++)
{
    if(b[i]!=c[i])
    {
        flag2=true;
        cout << b[i] << endl;
        break;
    }
}
if(flag2==false)
{
    cout << b[n-2] << endl;
}
    return 0;
}