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
      ll t;cin>>t;
      while(t--)
      {
            ll a,b;
            cin>>a>>b;
            if(b>a)
            {
                cout << "NO" <<endl;
            }
            else
            {
                if(b==a)
                {
                    cout << "YES" << endl;
                    for(ll i=0 ; i<a ; i++)
                    {
                        cout << 1 << " ";
                    }
                    cout << endl;
                }
                else
                {
                    if(a%2!=0)
                    {
                        if(b%2==0)
                        {
                            cout << "NO" <<endl;
                        }
                        else
                        {
                            cout << "YES" <<endl;
                            ll count=0;
                            for(ll i=0 ; i<b-1 ; i++)
                            {
                                count+=1;
                                cout << 1 << " ";
                            }
                            cout << a-count << endl;
                        }
                    }
                    else
                    {
                        if(b%2==0)
                        {
                            ll x=a/b;
                            ll y=a%b;
                            if(y==0)
                            {
                                cout << "YES" <<endl;
                                for(ll i=0 ; i<b ; i++)
                                {
                                    cout << x << " ";
                                }
                                cout << endl;
                            }
                            else
                            {
                                cout << "YES" <<endl;
                                for(ll i=0 ; i<b-1 ; i++)
                                {
                                    cout << x << " ";
                                }
                                cout << x+y << endl;
                            }
                        }
                        else
                        {
                            ll x=a/2;
                            if(x>=b)
                            {
                                cout << "YES" <<endl;
                                ll count=0;
                                for(ll i=0 ; i<b-1 ; i++)
                                {
                                    cout << 2 << " ";
                                    count+=2;
                                }
                                cout << a-count << endl;
                            }
                            else
                            {
                                cout << "NO" <<endl;
                            }
                        }
                    }
                }
 
            }
      }
 
 
	return 0;
 
}