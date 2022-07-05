#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n , d;
    long l;
    double cmax=0 , fspace ;
    cin >> n >> l;
    vector <long> a;
    for (int i = 0 ; i < n ;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for (int i = 0 ; i+1 < n ;i++)
    {
        int s = a[i+1] - a[i];
        if ( s > cmax)
        {
            cmax = s;
        }
    }
    double nspace = cmax / 2;
    if (a[0] != 0 ) fspace = a[0];
    if (a[n-1] != l) 
    {
        if(l - a[n-1] > fspace) fspace= l - a[n-1];
    }
    if (nspace > fspace ) printf("%.10f\n",nspace);
    else printf("%.10f\n",fspace);
    return 0;
}