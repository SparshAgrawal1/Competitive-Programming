#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,b,c;
	    cin>>a>>b>>c;
        if(a<=0 || b<=0 || c<=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(a!=b && b!=c && c!=a)
            {
                cout << "NO" << endl;
            }
            else
            {
                ll x=min(a,min(b,c));
                ll y=max(a,max(b,c));
                if(a==b && b==c)
                {
                    cout << "YES" << endl;
                    cout << a << " " <<a<< " "<<a<<endl;
                    continue;
                }
                if(((a==b||a==c)&&x==a)||((a==b||b==c)&&x==b)||((c==b||a==c)&&x==c))
                {
                    cout << "NO" << endl;
                    continue;
                }
                cout << "YES" << endl;
                cout << x<<" "<<x<< " "<<y<<endl;
            }
        }
       
        
 
	}
	return 0;
}