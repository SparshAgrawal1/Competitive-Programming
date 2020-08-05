#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;cin>>n>>m;
	    int a[n];
	    int p[m];
	    for(int i=0 ; i<n ; i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0 ; i<m ; i++)
	    {
	        cin>>p[i];
	    }
	    set<int> s;
	    bool flag = true;
	    while(true)
	    {
	        bool ans=true;
	        for(int i=0 ; i<n-1 ; i++)
	        {
	            if(a[i]>a[i+1])
	            {
	                swap(a[i],a[i+1]);
	               // flag=false;
	                ans=false;
	                s.insert(i+1);
	            }
	        }
	        if(ans==true)
	        {
	            break;
	        }
	    }
	    for(int i=0 ; i<m ; i++)
	    {
	        if(s.find(p[i])!=s.end())
	        {
	            s.erase(p[i]);
	        }
	    }
	    if(s.size()>0)
	    {
	        cout << "NO" << endl;
	    }
	    else
	    {
	        cout << "YES" << endl;
	    }
	   
	}
	return 0;
}