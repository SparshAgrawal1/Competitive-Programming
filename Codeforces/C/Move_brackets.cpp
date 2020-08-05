#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ispar(string x)
{
    stack<char>s;
    for(ll i=0;i<x.length();i++){
        if(!s.empty())
        {
            char m=s.top();
            // if(x[i]==')'&&m!=')')
            // {
                
            // }
            if(m=='(' && x[i]==')')
            s.pop();
            else
            s.push(x[i]);
        }
        else
        s.push(x[i]);
    }
    // // if(s.empty())
    // return true;
    // else
    // return false;
    return s.size();
}
 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    vector<pair<ll,bool>> v;
	    cout << ispar(s)/2 << endl;
	  
	}
	return 0;
}