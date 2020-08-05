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
        vector<int> s;
        set<int> m;
        for(int i=0 ; i<n ; i++)
        {
            int a;cin>>a;
            s.push_back(a);
            // cin>>s[i];
            // m.insert(s[i]);
        }
        sort(s.begin(),s.end());
        // for(int i=0 ; i<n ; i++)
        // {
        //     cout << s[i] << " ";
        // }
        // cout << endl;
        int res= INT_MAX;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                res = min(res,abs(s[i]-s[j]));
            }
        }
        cout << res << endl;
        
        
    }
    return 0;
}