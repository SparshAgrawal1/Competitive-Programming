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
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      unordered_set<ll> s;
      s.insert(a);
      s.insert(b);
      s.insert(c);
      s.insert(d);
      cout<<4-s.size();
     return 0;
}