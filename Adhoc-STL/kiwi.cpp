#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, max= 0;
    cin >> n;
    for (int i = 1 ; i<=n ;i++)
    {
        double  valformoney, price , quantity , size;
        cin >> price >>quantity >>size;
        valformoney = (quantity*size) / price;
        if (valformoney > max) max = i;
    }
    cout << max <<endl;
    return 0;
}