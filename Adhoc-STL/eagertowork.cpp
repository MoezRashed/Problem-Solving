#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0 ; i < t ; i++)
    {
        double x , y , t, pyth = 0.0,time = 0.0;
        cin >> x>>y>>t;
        pyth = sqrt((t*t)-(y*y));
        time = t+(x-pyth);
        printf("%.9f",time);
        return 0 ;
    }
}