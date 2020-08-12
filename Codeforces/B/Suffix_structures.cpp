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
 
 
int main()
{
    fast;
 
    string s1;
    cin>>s1;
    ll a[27]={0};
    for(ll i=0 ; i<s1.length() ; i++)
    {
        a[int(s1[i])-97]++;
    }
    string s2;
    bool flag1=false;
    bool flag2=false;
    cin>>s2;
    bool curr=false;
    ll l=0;
    ll count=0;
    ll n=s2.length();
    for(ll i=0 ; i<s1.length() ; i++)
    {
        if(s1[i]==s2[l])
        {
            l++;
            count++;
        }
    }
    if(count==n)
    {
        curr=true;
    }
    if(curr==true)
    {
        cout<<"automaton"<<endl;
    }
    else
    {
        for(ll i=0 ; i<s2.length() ; i++)
        {
            if(a[int(s2[i])-97]>0)
            {
                a[int(s2[i])-97]--;
            }
            else
            {
                flag1=true;
                break;
            }
 
        }
        if(flag1==true)
        {
            cout<<"need tree"<<endl;
        }
        else
        {
            if(s2.length()==s1.length())
            {
                cout<<"array"<<endl;
            }
            else
            {
                cout<<"both"<<endl;
            }
        }
 
    }
 
	return 0;
 
}