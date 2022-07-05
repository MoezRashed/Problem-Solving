#include <bits/stdc++.h>

using namespace std;

int main()
{   int t ;
    cin >> t ;
    for(int j = 0 ; j < t ; j++)
    {
    string x;
    cin >> x;
    int steps = 0 ;
    for (int i = 0 ; i <= x.size();i++)
    {
        if (x[i] == 'U') steps ++;
        else break;
    }
    cout<<steps<<endl;
    }
    return 0;
}