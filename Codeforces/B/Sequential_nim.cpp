#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v;
        vector<ll> ones;
        
        for(ll i=0 ; i<n ; i++)
        {
            ll a;cin>>a;v.push_back(a);
            if(a==1)
            {
                ones.push_back(i);
            }
        }
        bool flag=false;
        for(ll i=0 ; i<n ; i++)
        {
          
                if(v[i]==1)
                {
                    flag=!flag;
                }
                else
                {
                    
                    flag=!flag;
                    break;
                }
                
        
            
        }
        // flag=!flag;
        if(flag==false)
        {
            cout << "Second" <<endl;
        }
        else
        {
            cout << "First" <<endl;
        }
        
        // ll count=ones.size();
        // if(count==0)
        // {
        //     if(n%2==0)
        //     {
        //         cout << "Second" << endl;
        //     }
        //     else
        //     {
        //         cout << "First" << endl;
        //     }
        // }
        // else if(count==n)
        // {
        //     if(n%2==0)
        //     {
        //         cout << "Second" <<endl;
        //     }
        //     else
        //     {
        //         cout << "First" <<endl;
        //     }
        // }
        // else
        // {
            
           
        // }
        
    }
    return 0;
}
