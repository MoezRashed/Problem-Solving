#include <bits/stdc++.h>
#include <math.h>

using namespace std;
int main()
{
    int row ,column, t;
    cin >> t;
    while (t)
    {   int total = 0;
        cin >> row >>column;
        if ((row == 1 && column > 2) || (column == 1 && row > 2)) 
        {   total = -1;
            cout<< total <<endl;
            continue;
        }
        total = (min(row , column)*2);
        if (abs(row - column)%2 == 0)
        {
            total += abs(row - column)*2;
        }
        else {
            total += (abs(row - column)*2) -3;
        }
        cout <<total <<endl;
    }
return 0 ;
}