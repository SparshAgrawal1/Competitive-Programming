#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <math.h>
#include <bitset>
#define MAX 1000
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
 
int main()
{
    fast;
    double n,r;
    cin>>n>>r;
    double l=sin(3.1415926535/n);
    cout<<fixed<<setprecision(7)<<(r*l)/(1-l);
    return 0;
}