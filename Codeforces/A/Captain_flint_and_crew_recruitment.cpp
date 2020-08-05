#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
      fast;
     ll t;cin>>t;
     while(t--)
     {
        ll n;
        cin>>n;
        if(n<31)
        {
            cout<<"NO"<<endl;
        }
        else if(n==36)
        {
            cout << "YES" <<endl;
            cout<<5<<" "<<6<<" "<<10<<" "<<15<<endl;
        }
        else if(n==44)
        {
            cout << "YES" <<endl;
            cout<<6<<" "<<7<<" "<<10<<" "<<21<<endl;
        }
        else if(n==40)
        {
            cout<<"YES"<<endl;
            cout<<15<<" "<<10<<" "<<6<<" "<<9<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
        }
     }
 
	return 0;
 
}