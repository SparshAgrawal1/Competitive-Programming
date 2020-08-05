#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    unsigned long long  t;
    cin>>t;
    while(t--)
    {
        unsigned long long  n,r;
        cin>>n>>r;
        unsigned long long  count=0;
        if(r<n)
        {
            count=count+((r*(r+1))/2);
        }
        else
        {
            r=n-1;
            count=count+((r*(r+1))/2);
            count++;
        }
        cout << count << endl;
    }
    return 0;
}