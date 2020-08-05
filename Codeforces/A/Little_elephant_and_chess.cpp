#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
	string s1,s2,s3,s4,s5,s6,s7,s8;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	cin>>s4;
	cin>>s5;
	cin>>s6;
	cin>>s7;
	cin>>s8;
	string a="WW";
	string b="BB";
	if(s1.find(a)!=-1||s1.find(b)!=-1||s2.find(a)!=-1||s2.find(b)!=-1||s3.find(a)!=-1||s3.find(b)!=-1||s4.find(a)!=-1||s4.find(b)!=-1||s5.find(a)!=-1||s5.find(b)!=-1||s6.find(a)!=-1||s6.find(b)!=-1||s7.find(a)!=-1||s7.find(b)!=-1||s8.find(a)!=-1||s8.find(b)!=-1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
	return 0;
}