#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
 
int main()
{
	fast;
	ll t;
	t=1;
//	cin>>t;
	while(t--)
    {
 
       string s;
       cin>>s;
       string s1="ABC";
       string s2="ACB";
       string s3="BAC";
       string s4="BCA";
       string s5="CAB";
       string s6="CBA";
       if(s.find(s1)!=-1||s.find(s2)!=-1||s.find(s3)!=-1||s.find(s4)!=-1||s.find(s5)!=-1||s.find(s6)!=-1)
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }
 
    }
 
	return 0;
}