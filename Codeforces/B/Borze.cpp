#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
 
int main()
{
    string s;
    cin>>s;
    ll l=0;
    while(l<s.length())
    {
        if(s[l]=='.')
        {
            cout << 0 ;
            l++;
        }
        else if(s[l]=='-'&&s[l+1]=='.')
        {
            cout << 1;
            l=l+2;
        }
        else if(s[l]=='-'&&s[l+1]=='-')
        {
            cout << 2;
            l=l+2;
        }
        
    }
    cout << endl;
    
    return 0;
}