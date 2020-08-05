#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n==1||n==2)
	    {
	        cout << 1 << endl;
	    }
	    else if(n%2==0)
	    {
	        cout << n/2 << endl;
	    }
	    else
	    {
	        cout << (n-1)/2 << endl;
	    }
	}
	return 0;
}