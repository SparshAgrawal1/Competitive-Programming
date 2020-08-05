#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll count=0;
        while(a!=0)
        {
            count=count+a%b;
            a=a/b;
            count++;
        }
        cout<<count-1<<endl;
    }
    
    return 0;
}
