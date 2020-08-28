#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
ll sumDigits(ll no)
 {
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
 }
void solve()
{
    ll a1,a2,b1,b2,c1,c2;
    cin>>a1>>a2;
    cin>>b1>>b2;
    cin>>c1>>c2;
    cout<<3<<endl;
    cout<<a1+b1-c1<<" " <<a2+b2-c2<<endl;
    cout<<a1-b1+c1<<" " <<a2-b2+c2<<endl;
    cout<<-a1+b1+c1<<" " <<-a2+b2+c2<<endl;
}
 
int main()
{
    fast;
    solve();
	return 0;
}