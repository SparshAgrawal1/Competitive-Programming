#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    int n;
	    int l=0;
	    cin>>n;
	    int count=0;
	    vector<int> v;
	    while(n>0)
	    {
	        int y=n%10;
	        n=n/10;
	        int x=pow(10,l);
	        if(y!=0)
	        {
	            y=y*x;
	            v.push_back(y);
	            count++;
	            
	        }
	        l++;
	        
	    }
	    cout << count << endl;
	    for(auto z:v)
	    {
	        cout << z << " ";
	    }
	    cout << endl;
	}
	return 0;
}
