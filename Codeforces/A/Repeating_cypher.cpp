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
      ll n;
      cin>>n;
      string s="";
      string s1;cin>>s1;
      ll l=0;
      ll h=1;
      while(s1.length()>0)
      {
          s+=s1[l];
          s1.erase(l,h);
          h++;
 
      }
      cout<<s<<endl;
     return 0;
}
