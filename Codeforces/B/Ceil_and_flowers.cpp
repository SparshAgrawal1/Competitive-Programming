#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
      fast;
      ll a,b,c;
      cin>>a>>b>>c;
      ll d=min(a,min(b,c));
      a=a-d;
      b=b-d;
      c=c-d;
      if(a%3+b%3+c%3==4)
      {
          if(d>0)
          d++;
      }
       cout << d+a/3+b/3+c/3 <<endl;
	return 0;
 
}
