#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
bool xxxx(ll a,ll b,ll c)
{
    if(a+b>c && b+c>a && a+c>b)
    {
        return true;
    }
    return false;
}
bool xxxxx(ll a,ll b,ll c)
{
    if(a+b>=c && b+c>=a && a+c>=b)
    {
        return true;
    }
    return false;
}
 
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(xxxx(a,b,c)==true||xxxx(a,b,d)==true||xxxx(a,c,d)==true||xxxx(b,c,d)==true)
    {
        cout << "TRIANGLE"<<endl;
    }
    else if(xxxxx(a,b,c)==true||xxxxx(a,b,d)==true||xxxxx(a,c,d)==true||xxxxx(b,c,d)==true)
    {
        cout << "SEGMENT" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" <<endl;
    }
    
}