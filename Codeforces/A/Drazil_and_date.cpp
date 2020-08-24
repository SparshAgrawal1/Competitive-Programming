#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
        fast;
 
        ll a,b,s;
        cin>>a>>b>>s;
        a=abs(a);
        b=abs(b);
        if(a==0&&b==0)
        {
            if(s%2==0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            if(a+b==s)
            {
                cout<<"Yes"<<endl;
            }
            else if(a+b>s)
            {
                cout<<"No"<<endl;
            }
            else
            {
                if(s%2==(a+b)%2)
                {
                    cout<<"Yes"<<endl;
                }
                else
                {
                    cout<<"No"<<endl;
                }
            }
        }
 
	return 0;
 
}