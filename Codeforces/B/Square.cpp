#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    
    int t;cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b;
        cin>>c>>d;
        int x = min(a,b);
        int z = max(a,b);
        int q = max(c,d);
        int y = min(c,d);
        // if(z!=q)
        // {
        //     cout << "NO" << endl;
        // }
        if(x+y==z && z==q)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
        
        
        
        
    
        
    
    return 0;
}