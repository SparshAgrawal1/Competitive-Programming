#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll n;
	cin>>n;
	ll count=6;
	ll a=1;
	ll b=2;
	ll c=3;
	for(ll i=1  ; i<=n-3 ; i++)
	{
	    count+=a*(b+1)*(c+1);
	    b++;
	    c++;
	}
	cout << count << endl;
	return 0;
}