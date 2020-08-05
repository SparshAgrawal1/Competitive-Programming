#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    int a = n/k;
	    if(m<a)
	    {
	        cout << m << endl;
	    }
	    else
	    {
	        
	        int c = m-a;
	        k=k-1;
	        int x = c/k;
	        int y = c%k;
	        if(y>1)
	        {
	            y=1;
	        }
	        int z= x + y;
	       // if(x+y>a)
	       // {
	       //     cout << "0" << endl;
	       // }
	       // else
	       // {
	        cout << a-z << endl;
	       // }
	    }
	}
	return 0;
}