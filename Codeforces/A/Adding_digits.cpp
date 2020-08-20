#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
typedef double db;
bool sortbysecdesc(const pair<int,int> &a, const pair<int,int> &b)
{
        return (a.first-a.second)<(b.first-b.second);
}
 
int main()
{
        fast;
        ll a,b,c;
        cin>>a>>b>>c;
        ll x= a*10;
        ll y;
        bool flag=true;
        for(ll i=0 ; i<10 ; i++)
        {
            y=x;
            y+=i;
            if(y%b==0)
            {
                cout<<y;
                for(ll j=1 ; j<c ; j++)
                {
                    cout<<0;
                }
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<-1;
        }
        return 0;
 
}