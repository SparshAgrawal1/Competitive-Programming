#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
    ll n;
    cin>>n;
    ll l=n;
    if(n%2==1)
    {
        cout<<-1<<endl;
    }
    else{
        for(ll i=1 ; i<=n ; i++)
        {
            cout << l << " ";
            l--;
        }
    cout<<endl;
    }
 
    return 0;
    }
