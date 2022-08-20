#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
      
    int n , m;
    cin >> n;
    int p[100001];
    ll   cp[n+1] , csp[n+1]; 
    cp[0] = 0 , csp[0] = 0 ;
  
    for (int i = 1 ; i <= n ; ++i)
    {
        cin >> p[i];
        cp[i]= cp[i-1] + p[i];
    }
    sort(p , p + n + 1);
    for (int i = 1 ; i <= n ; ++i)
    {
        csp[i] = csp[i-1] + p[i];
    }
    cin >> m;
    while (m--)
    {
        int x , y , z;
        cin >> x >> y >> z;
        if (x==1)
        {
            cout <<cp[z] - cp[y-1]<<endl;
        }
        else if(x==2)
        {
            cout << csp[z] - csp[y-1]<<endl;
        }
    }
    return 0;
}