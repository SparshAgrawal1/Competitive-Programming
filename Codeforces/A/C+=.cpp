#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    long long int a,b,n;
	    cin>>a>>b>>n;
	    long long int count=0;
	    while(a<=n && b<=n)
	    {
	        if(a<b)
	        {
	            a=a+b;
	            count++;
	        }
	        else
	        {
	            b=b+a;
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}