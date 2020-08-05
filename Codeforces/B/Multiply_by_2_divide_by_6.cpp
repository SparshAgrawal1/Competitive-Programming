#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll count=0;
	    bool flag=true;
	    while(n!=1)
	    {
	        if(n%2==0)
	        {
	            if(n%6!=0)
	            {
	                flag=false;
	                break;
	            }
	            else
	            {
	                n=n/6;
	                count++;
	            }
	        }
	        else
	        {
	            n=n*2;
	            count++;
	        }
	    }
	    if(flag==false)
	    {
	        cout << -1 << endl;
	    }
	    else
	    {
	        cout << count << endl;
	    }
	    
	    
	  
	}
	return 0;
}