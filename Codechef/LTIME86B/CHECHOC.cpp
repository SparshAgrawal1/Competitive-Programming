#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cmath>
#include <map>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long int ll;
void xxxxx(ll l,ll h,vector<ll> &v)
{
     string s1 = bitset<64> (l).to_string();
	    for(ll i=0 ; i<s1.length() ; i++)
        {
            if(s1[i]=='1')
            {
                s1.erase(0,i-0);
                break;
            }
        }
	    string s2 = bitset<64> (h).to_string();
	    for(ll i=0 ; i<s2.length() ; i++)
        {
            if(s2[i]=='1')
            {
                s2.erase(0,i-0);
                break;
            }
        }
        string s3=s1+s2;
        string s4=s2+s1;
        ll count1=0;
        ll count2=0;
        ll y=0;
        for(ll i=s3.length()-1 ; i>=0 ; i--)
        {
            if(s3[i]=='1')
            {
                count1=count1+powl(2,y);
            }
            y++;
        }
        y=0;
        for(ll i=s4.length()-1 ; i>=0 ; i--)
        {
            if(s4[i]=='1')
            {
                count2=count2+powl(2,y);
            }
            y++;
        }
        v.push_back(abs(count1-count2));
}

int main()
{
      fast;
     ll t;cin>>t;
     while(t--)
     {
         ll n,m,x,y;
         cin>>n>>m>>x>>y;
         ll count=n*m;
         ll a=count/2;
         ll ans=min(2*x,y);
         if(count==1)
         {
             cout << x << endl;continue;
         }
         if(count%2!=0)
         {
             if(x>=y)
             {
                 cout << (a+1)*y << endl;
             }
             else
             {
                cout<< a*ans+x<<endl;    
             
             }
         }
         else
         {
             cout << a*ans<<endl;
         }
     }
	return 0;

}