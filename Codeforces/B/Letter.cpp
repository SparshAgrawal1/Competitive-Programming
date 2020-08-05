#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2; 
    getline(cin,s1);
    getline(cin,s2);
    
    map<int,int> a;
    
    for(int i = 0; i < s1.size(); i++)
        a[s1[i]]++;
    for(int i = 0; i < s2.size(); i++)
    {
        if( s2[i]!=' ' && a[s2[i]]==0){cout << "NO"; return(0);}
        a[s2[i]]--;
    }
    cout << "YES";
}