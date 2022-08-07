#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x , it = 0;
        int arr[3];
        cin >> x >> arr[0] >> arr[1] >> arr[2];
        while(x != 0 && it < 3)
        {  
            for (int i = 0 ; i < 3 ; i++)
            {
                if (x == i) x = arr[i];
            }
            it++;
        }
        if (x == 0 & it < 3) cout << "NO"<<endl;
        else cout << "YES"<<endl;
    }
    return 0;
}