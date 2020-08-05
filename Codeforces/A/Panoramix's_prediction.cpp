#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
 
 
int main()
{
	ll n,m;
	cin>>n>>m;
	vector<ll> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	v.push_back(11);
	v.push_back(13);
	v.push_back(17);
	v.push_back(19);
	v.push_back(23);
	v.push_back(29);
	v.push_back(31);
	v.push_back(37);
	v.push_back(41);
	v.push_back(43);
	v.push_back(47);
	v.push_back(53);
	v.push_back(59);
	v.push_back(61);
    for(ll i=0 ; i<v.size() ; i++)
    {
        if(v[i]==n)
        {
            if(v[i+1]==m)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            break;
        }
    }
 
	return 0;
}