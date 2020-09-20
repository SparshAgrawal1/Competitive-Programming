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
 
bool isSubSequence(string s1, string s2, ll m, ll n)
{
    if (m == 0) return true;
    if (n == 0) return false;
 
    if (s1[m-1] == s2[n-1])
        return isSubSequence(s1, s2, m-1, n-1);
 
    return isSubSequence(s1, s2, m, n-1);
}
 
void solve()
{
    ll n;cin>>n;
    ll a[n];
    ll b[n],c[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        b[i]=a[i];
        c[i]=a[i];
    }
    sort(b,b+n,greater<ll>());
    sort(a,a+n);
    ll l = 0;
    ll h = n / 2;
	cout << (n - 1) / 2 << "\n";
	while (h < n)
    {
		cout << a[h] << " ";
        h++;
		if (l == n / 2) break;
		cout << a[l] << " ";
		l++;
    }
}
 
 
 
int main()
{
    solve();
 
    return 0;
}