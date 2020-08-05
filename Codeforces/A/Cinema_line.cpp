#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
 
 
int main()
{
	ll n;
	cin >> n;
	ll a[n+1];
	for(ll i=1 ; i<=n; i++)
    {
        cin >> a[i];
    }
	ll l=0;
	ll h=0;
	bool flag=true;
	for(ll i=1 ; i<=n ; i++)
    {
        if(a[i]==25)
        {
            l++;
        }
        else if(a[i]==50)
        {
            h++;
            if(l>0)
            {
                l--;
            }
            else
            {
                flag=false;
                break;
            }
        }
        else
        {
           if(h>=1 && l>=1)
           {
               h--;
               l--;
           }
           else if(l>=3)
           {
               l=l-3;
           }
            else
           {
               flag=false;
               break;
           }
        }
    }
    if(flag==false)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" <<endl;
    }
 
	return 0;
}