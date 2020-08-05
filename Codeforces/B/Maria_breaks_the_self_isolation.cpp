#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int ans=-1;
        for(int i=n-1 ; i>=0 ; i--)
        {
            if(a[i]<=i+1)
            {
                ans=i;
                break;
            }
        }
        // if(ans==0)
        // cout << ans+ << endl;
        // else
        cout << ans+2 << endl;
    }
        
        
        
        
    
        
    
    return 0;
}