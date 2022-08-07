#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int w[n];
        int m = INT_MAX;
        for(i=1; i<=n; i++)
        {
            cin>>w[i];
            m = min(m,w[i]);
        }
        int moves=0;
        for(i=1; i<=n; i++)
        {
            moves += (w[i]-m);
        }
        cout<<moves<<endl;
    }
    return 0;
}