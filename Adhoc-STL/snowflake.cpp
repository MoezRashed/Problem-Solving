#include <bits/stdc++.h>
#include <map> 
#include <math.h>

using namespace std;

int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<long , long> snowflakes;
    int t , n ;
    cin >> t ;
    for (int i = 0 ; i < t ; i++)
    {   long current=0,r = 0,maxp = 0;
        cin >> n;
        for (int j = 1 ; j <= n ; j++)
        {   long x;
            cin>> x;
            long seen = snowflakes[x];
            if (seen)
            {   
                r = max(r , seen);
                current = j - r -1;
            }
            current++;
            snowflakes[x] = j;
            maxp = max(maxp , current);
        }
        cout<<maxp<<endl;
        snowflakes.clear();
    }
    return 0 ;
}
