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
         ll l,r;
         cin>>l>>r;
         if(l==1)
         {
             cout << l << " "<<r<<endl;
         }
         else
         {
             ll count=r-l;
             if(count==0)
             {
                 cout<< l<< " "<<l<<endl;
             }
             else if(count==1)
             {
                 cout << -1<<" "<<-1<<endl;
            }
            else
            {
                if(l%2==0)
                {
                    if(l*2<=r)
                    {
                        cout << l<<" "<<2*l<<endl;
                    }
                    else
                    {
                        cout << -1<<" "<<-1<<endl;
                    }
                }
                else
                {
                    if(l*2<=r)
                    {
                        cout<<l<<" "<<2*l<<endl;
                    }
                    else
                    {
                        cout<<-1<<" "<<-1<<endl;
                    }
                }
            }
         }
     }
 
	return 0;
 
}