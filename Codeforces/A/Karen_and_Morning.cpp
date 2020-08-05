#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
    fast;
 
    string s;
    cin>>s;
    ll n=s.length();
    char x=s[0];
    char y=s[1];
    char x1=s[n-1];
    char y1=s[n-2];
    string s1="00",s2="00",s3="00",s4="00";
    s1[0]=x;
    s1[1]=y;
    s2[0]=y;
    s2[1]=x;
    s3[0]=y1;
    s3[1]=x1;
    s4[0]=x1;
    s4[1]=y1;
    ll z1,z2,z3,z4;
    z1=stoi(s1);
    z2=stoi(s2);
    z3=stoi(s3);
    z4=stoi(s4);
    if(z1==z4)
    {
        cout<<0<<endl;
    }
    else
    {
        if(z2>z3&&z2<60)
        {
            cout<<z2-z3<<endl;
        }
        else
        {
            ll y=-1;
            ll count=60-(z3);
            ll j=0;
            while(true)
            {
                if(y<60&&y>=0)
                {
                    break;
                }
                j++;
                z1=z1+1;
                z1=z1%24;
                y=(z1%10)*10 + (z1/10);
            }
            j--;
            count=count+(60*j);
            count+=y;
            cout<<count<<endl;
 
 
 
 
 
 
        }
    }
 
	return 0;
}