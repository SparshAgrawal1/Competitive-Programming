#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
void solve()
{
	ll y,x;
	cin>>y>>x;
	ll a=1;
	ll b=0;
	if(x==0)
    {
        cout<<"No"<<endl;
        return;
    }
    else if(x>1)
    {
 
        a=a+1;
        b=b+1;
        ll b1=y-b;
        ll a1=x-a;
        a=a+a1;
        b=b+a1;
        if(b>y)
        {
            cout<<"No"<<endl;
        }
        else if(b==y)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            if((y-b)%2==0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    else if(x==1)
    {
        if(y==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
 
}
 
int main()
{
    solve();
	return 0;
}