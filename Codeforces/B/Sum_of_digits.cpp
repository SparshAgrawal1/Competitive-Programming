#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
 
int main()
{
	int k=0;
	int c=0;
	string s;
	cin>>s;
	while(s.length()>1){
		k=0;
	for (int i=0;i<(int)s.length();i++)
	k+=(s[i]-'0');
	s=to_string(k);
	c++;
	}
	cout<<c;
	return 0;
}