    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
 
    return true;
//    return true;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        if(n%2==0)
        {
            cout << n/2 << " "<<n/2 << endl;
        }
        else
        {
            if(isPrime(n)==true)
            {
                cout << 1 << " "<<n-1<<endl;
            }
            else
            {
                for(ll i=2 ; i<=sqrtl(n) ; i++)
               {
                   if(n%i==0)
                    {
                        cout << min(n/i,n-(n/i)) << " " << max(n/i,n-(n/i)) << endl;
                        break;
                    }
                }
//                for(ll i=3 ; i<n ; i=i+2)
//                {
//                    if(n%i==0)
//                    {
//                        cout << n/i << " "<<n-(n/i)<<endl;
//                        break;
//                    }
//                }
//                if(n%3==0)
//                {
//                    cout << n/3<<" "<<n-(n/3)<<endl;
//                }
//                else if(n%5==0)
//                {
//                    cout << n/5<<" "<<n-(n/5)<<endl;
//                }
//                else if(n%7==0)
//                {
//                    cout <<n/7<<" "<<n-(n/7)<<endl;
//                }
//                else
//                {
//                    cout << sqrtl(n) << " "<<n-sqrtl(n) <<endl;
//                }
            }
        }
    }
 
 
 
 
	return 0;
}