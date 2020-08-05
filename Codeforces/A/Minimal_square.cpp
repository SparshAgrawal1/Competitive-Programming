#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
 
// bool prime_check(long long int n)
// {
//     int flag=1;
//     for (long long int i = 2; i <= sqrt(n); i++) 
//     { 
//         if (n % i == 0) { 
//             flag = 0; 
//             break; 
//         } 
//     } 
  
//     if (flag == 1) { 
//         return true; 
//     } 
//     else { 
//         return false; 
//     } 
// }
 
 
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x = min(a,b);
        int y = max(a,b);
        if(2*x>=y)
        {
            cout << 4*x*x << endl;
        }
        else
        {
            cout << y*y << endl;
        }
        
    }
    return 0;
}
