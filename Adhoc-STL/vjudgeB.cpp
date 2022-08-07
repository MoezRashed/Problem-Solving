#include <bits/stdc++.h>

using namespace std;

int main()
{   int t, x , y , wallet , n , pages , price ;
    cin >> t;
    for (int i = 0 ; i < t ;i++)
    {
        int flag = 0;
        cin >> x >> y >> wallet >> n;
        x-=y;
        for (int j = 0 ; i < n ;j++)
        {   
            cin >> pages >> price;
            if (pages>=x && price<=wallet) flag = 1;
        }
        if (flag == 0) cout << "UnluckyChef"<<endl;
        else cout << "LuckyChef" <<endl;
    }
    return 0;
}
