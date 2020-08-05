#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
    	long long int  a,b,c;
    	cin >> a >> b >> c;
    	long long int  x=-1,y=-1;
    	if(a*b>c)
    		y=b;
    	if(a< c)
    		x=1;
    	cout << x<< " " << y;
    	cout << endl;
    	
	}
	return 0;
}