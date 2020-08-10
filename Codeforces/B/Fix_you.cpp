#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#include <bitset>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
typedef double db;
 
 
int main()
{
      fast;
      ll t;
      cin>>t;
      while(t--)
      {
            ll n,m;
            cin >> n >> m;
            char mat[n][m];
            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<m;j++)
                {
                    cin >> mat[i][j];
                }
            }
            ll count = 0;
            for(ll i=0;i<m;i++)
            {
                if(mat[n-1][i] == 'D')
                {
                    count++;
                }
            }
            for(ll i=0;i<n;i++)
            {
                if(mat[i][m-1] == 'R')
                {
                    count++;
                }
            }
            cout << count << endl;
      }
      return 0;
 
}