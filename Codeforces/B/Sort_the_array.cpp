#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
void rvereseArray(ll arr[], ll start, ll end)
{
    while (start < end)
    {
        ll temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
 
int main()
{
    ll n;
    cin>>n;
    ll a[n+1],b[n+1];
    b[0]=0;
    for(ll i=1 ; i<=n ; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n+1);
//    for(ll i=0 ; i<=n ; i++ )
//    {
//        cout << b[i] << " ";
//    }
    vector<ll> v;
    for(ll i=1 ; i<=n ; i++)
    {
        if(a[i]!=b[i])
        {
            v.push_back(i);
        }
    }
    if(v.size()==0)
    {
        cout << "yes" << endl;
        cout <<1<<" "<<1<<endl;
    }
    else
    {
        ll l=v[0];
        ll h=v[v.size()-1];
        rvereseArray(a,l,h);
        bool flag=true;
        for(ll i=1 ; i<=n ; i++)
        {
            if(a[i]!=b[i])
            {
                flag=false;
                break;
            }
        }
//        cout << endl;
       if(flag==false)
        {
            cout << "no" <<endl;
        }
        else
        {
            cout << "yes" << endl;
           cout << l<<" "<<h<<endl;
        }
 
    }
 
 
 
 
 
	return 0;
}