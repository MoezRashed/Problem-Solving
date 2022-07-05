#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "ROYGBIV";
    int n; 
    cin >> n ;
    for (int i = 0 ; i < n - 6 ; i++)
    {
        if (i == 0) 
        {cout << "ROYGBIV";
        continue;
        }
        if  (i %4 == 1)cout<<"G";
        if  (i %4 == 2)cout<<"B";
        if  (i %4 == 3)cout<<"I";
        if  (i %4 == 0)cout<<"V";
    }
    return 0;
}