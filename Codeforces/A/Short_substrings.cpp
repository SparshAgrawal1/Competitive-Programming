#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    string a="";
	    for(int i=0 ; i<n ; i=i+2)
	    {
	        a=a+s[i];
	    }
	    a=a+s[n-1];
	    cout << a << endl;
	}
	return 0;
}
