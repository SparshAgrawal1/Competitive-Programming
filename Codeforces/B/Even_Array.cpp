#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
	   int n;
	   cin>>n;
	   int a[n];
	   int count1=0;
	   int count2=0;
	   for(int i=0 ; i<n ; i++)
	   {
	       cin>>a[i];
	       if(i%2==0)
	       {
	           if(a[i]%2!=0)
	           {
	               count1++;
	           }
	       }
	       else
	       {
	           if(a[i]%2==0)
	           {
	               count2++;
	           }
	       }
	       
	   }
	   
	   if(count1!=count2)
	   {
	       cout << -1 << endl;
	   }
	   else
	   {
	       cout << count1 << endl;
	   }
	}
	return 0;
}