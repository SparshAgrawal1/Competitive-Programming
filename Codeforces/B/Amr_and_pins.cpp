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
 
 
int main() {
	// your code goes here
	fast;
	ll r,x,y,x1,y1;
	cin>>r>>x>>y>>x1>>y1;
	ll t = (x1-x)*(x1-x) + (y1-y)*(y1-y);
	db q = sqrt(t);
	db k =q/(2*r);
	cout<<ceil(k)<<endl;
 
	return 0;
}