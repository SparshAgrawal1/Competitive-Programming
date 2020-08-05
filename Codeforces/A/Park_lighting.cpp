#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n%2==0 && m%2==0)
        {
            cout << (m/2)*n << endl;
        }
        if(n%2!=0 && m%2!=0)
        {
            int a = (m/2)*n;
            int b = n/2;
            int c = n%2;
            cout << a+b+c << endl;
        }
        else
        {
            if(n%2!=0)
            {
                int a = (n/2)*m;
                int b = m/2;
                cout << a+b << endl;
            }
            if(m%2!=0)
            {
                int a = (m/2)*n;
                int b = n/2;
                cout << a+b << endl;
            }
        }
        
        
    }
        
    
    return 0;
}
