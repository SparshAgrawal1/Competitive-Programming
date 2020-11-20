#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <math.h>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
 
   fast;
   ll t;cin>>t;
   while(t--)
   {
       string s;cin>>s;
       stack<char> q1,q2;
       ll curr=0;
       for(ll i=0 ; i<s.length() ; i++)
       {
           if(s[i]=='(')
           {
               q1.push(s[i]);
           }
           else if(s[i]=='[')
           {
               q2.push(s[i]);
           }
           else if(s[i]==')')
           {
               if(q1.empty()==false)
               {
                   q1.pop();
                   curr++;
               }
           }
           else
           {
               if(q2.empty()==false)
               {
                   q2.pop();
                   curr++;
               }
           }
       }
       cout<<curr<<endl;
   }
   return 0;
}