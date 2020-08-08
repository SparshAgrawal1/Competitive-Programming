#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
 
bool isPrime(ll n)
{
    if (n <= 1)  return false;
 
    for (ll i=2; i<=n/2; i++)
        if (n%i == 0)
            return false;
 
    return true;
}
 
int main()
{
ll x,y,n,j;
	cin>>n ;
	while(n--)
    {
		scanf("%lld",&x);
		y=sqrt(x);
		for(j=2;j*j<y;j++)
		{
			if(x%j==0)
			{
				break;
			}
		}
        if(j*j> y && y*y==x &&  x>1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
	}
	return 0;
}