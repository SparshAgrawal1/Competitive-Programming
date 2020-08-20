#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;cin>>t;
	while(t--)
	{
	    ll s,n;
	    cin>>s>>n;
	    if(n==1)
	    {
	        cout << s << endl;
	    }
	    else
	    {
	        if(n>=s)
	        {
	            if(s%2==0)
	            {
	                cout << 1 << endl;
	            }
	            else
	            {
	                if(s==1)
	                {
	                    cout << 1 << endl;
	                }
	                else
	                {
	                    cout << 2 << endl;
	                }
	            }
	        }
	        else
	        
	        {
	            ll count=0;
	            if(n%2==0)
	            {
	                count=count+(s/n);
	                s=s%n;
	                if(s%2==0)
	                {
	                    if(s!=0)
	                    {
	                        count++;
	                    }
	                }
	                else
	                {
	                    if(s==1)
	                    {
	                        count++;
	                    }
	                    else
	                    {
	                        count=count+2;
	                    }
	                }
	                cout << count << endl;
	            }
	            else
	            {
	                n--;
	                count=count+(s/n);
	                s=s%n;
	                if(s%2==0)
	                {
	                    if(s!=0)
	                    {
	                        count++;
	                    }
	                }
	                else
	                {
	                    if(s==1)
	                    {
	                        count++;
	                    }
	                    else
	                    {
	                        count=count+2;
	                    }
	                }
	                cout << count << endl;
	            }
	        }
	    }
	}
	return 0;
}
