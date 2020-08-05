#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(long long int n) 
{ 
 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (long long int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
} 
 
int main()
{
    
    int t;cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        // int a[4] = {2,3,5,7};
        // bool flag=true;
        // bool res=true;
        // int count=0;
        // long long int q=k;
        // while(q--)
        // {
        //     count++;
        //     for(int i=0 ; i<4 ; i++)
        //     {
                
        //         if(n%a[i]==0)
        //         {
        //             n = n + a[i];
        //             if(n%2==0)
        //             {
        //                 res=false;
        //             }
        //             flag=false;
        //             break;
        //         }
                
        //     }
        //     if(flag==true)
        //     {
        //         n=n+n;
        //         break;
        //     }
        //     flag=true;
        //     if(res==false)
        //     {
        //         break;
        //     }
        // }
        // if(count==k)
        // {
        //     cout << n << endl;
        // }
        // else
        // {
        //     int y = k-count;
        //     n = n + (2*y);
        //     cout << n << endl;
        // }
        if(n%2==0)
        {
            cout << n + (2*k) << endl;
        }
        else
        {
            // long long int a[4] = {3,5,7,n};
            for(long long int i=2 ; i<=n ; i++)
            {
                if(n%i==0)
                {
                    n=n+i;
                    break;
                }
            }
            cout << n + (2*(k-1)) << endl;
        }
        
    }
    return 0;
}