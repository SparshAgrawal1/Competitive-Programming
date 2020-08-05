#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
 
//bool sortbysec(const pair<ll,ll> &a,
//              const pair<ll,ll> &b)
//{
//    return (a.first > b.first);
//}
 
int main()
{
	ll x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	if(x2==x1)
    {
        ll x3,y3,x4,y4;
        x3=x1+(y2-y1);
        y3=y1;
        x4=x3;
        y4=y2;
        if(abs(x3)<=1000&&abs(y3)<=1000&&abs(x4)<=1000&&abs(y4)<=1000)
        {
            cout << x3<<" "<<y3<< " "<<x4<<" "<<y4<<endl;
        }
        else
        {
            cout << -1<<endl;
        }
 
 
    }
    else if(y1==y2)
    {
        ll x3,y3,x4,y4;
        x3=x1;
        x4=x2;
        y3=y1+(x2-x1);
        y4=y3;
        if(abs(x3)<=1000&&abs(y3)<=1000&&abs(x4)<=1000&&abs(y4)<=1000)
        {
            cout << x3<<" "<<y3<< " "<<x4<<" "<<y4<<endl;
        }
        else
        {
            cout << -1<<endl;
        }
    }
    else
    {
        ll x3,y3,x4,y4;
        ll t1=abs(x1-x2);
        ll t2=abs(y1-y2);
        if(t1!=t2)
        {
            cout << -1 << endl;
        }
        else
        {
            x4=x2;
            y4=y1;
            x3=x1;
            y3=y2;
            if(abs(x3)<=1000&&abs(y3)<=1000&&abs(x4)<=1000&&abs(y4)<=1000)
            {
                cout << x3<<" "<<y3<< " "<<x4<<" "<<y4<<endl;
            }
            else
            {
                cout << -1<<endl;
            }
        }
    }
 
 
 
 
 
	return 0;
}