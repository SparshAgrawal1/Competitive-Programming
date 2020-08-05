#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    if(n%2==0)
	    {
	        long long int x = n/2;
	        if(x%2==0)
	        {
	            cout <<"YES" << endl;
	        }
	        else
	        {
	            cout << "NO" << endl;
	        }
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
