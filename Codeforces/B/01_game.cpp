#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int count=0;
	    bool flag=true;
	    while(flag==true)
	    {
	        int n=s.length();
	        if(n<2)
	        {
	            break;
	        }
	        else
	        {
	            for(int i=0 ; i<n-1 ; i++)
	            {
	                if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0'))
	                {
	                    count++;
	                    s.erase(i,2);
	                    break;
	                }
	                if(i==n-2)
	                {
	                    flag=false;
	                    break;
	                }
	            }
	        }
	    }
	    if(count%2==0)
	    {
	        cout << "NET" << endl;
	    }
	    else
	    {
	        cout << "DA" <<endl;
	    }
	    
	    
	}
	return 0;
}
