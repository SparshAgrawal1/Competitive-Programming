#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    long long int a[n];
	    for(long long int i=0 ; i<n  ;i++)
	    {
	        cin>>a[i];
	    }
	    long long int b[k];
	    for(long long int i=0 ; i<k ; i++)
	    {
	        cin>>b[i];
	    }
	    sort(a,a+n);
	    sort(b,b+k);
	    long long int l=n-1;
	    long long int h=k-1;
	    long long int count=0;
	    map<long long int,vector<long long int>> m1;
	        for(long long int i=0 ; i<k ; i++)
	        {
	            if(b[i]!=-1)
	            {
	                m1[i].push_back(a[l]);
	                b[i]--;
	                l--;
	            }
	            if(b[i]==0)
	            {
	                b[i]=-1;
	            }
	        }
	    while(b[h]>0)
	    {
	        for(long long int i=0 ; i<k ; i++)
	        {
	            if(b[i]!=-1)
	            {
	                while(b[i]>0)
	                {
	                    m1[i].push_back(a[l]);
	                    l--;
	                    b[i]--;
	                }
	                b[i]=-1;
	            }
	        }
	    }
	    for(auto z:m1 )
	    {
	       long long int w = m1[z.first].size();
	       count=count+m1[z.first][0]+m1[z.first][w-1];
	       //cout << z.first << endl;
	       //for(auto w:m1[z.first])
	       //{
	       //    cout << w << " ";
	       //}
	       //cout << endl;
	    }
	    cout << count << endl;
	}
	return 0;
}