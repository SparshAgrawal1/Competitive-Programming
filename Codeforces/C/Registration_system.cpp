#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
 
int main()
{
   ll t;
   cin>>t;
   map<string,ll> m;
   set<string> s;
   while(t--)
   {
       string a;
       cin>>a;
       m[a]++;
       if(s.find(a)==s.end())
       {
           cout << "OK" << endl;
           s.insert(a);
       }
       else
       {
           string b= to_string(m[a]-1);
           a=a+b;
           s.insert(a);
           cout << a << endl;
       }
       
   }
    return 0;
}
