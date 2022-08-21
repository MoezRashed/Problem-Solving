#include <bits/stdc++.h>

using namespace std;
bool test(int n)
{
    if(n==1) return false;
    for (int i = 2 ; i*i <= n ; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
int main()
{
    int t , n;
    cin >> t ;
    while (t--)
    {
        cin >> n;
        bool x = false;
        x = test(n);
        if (x) cout<<"yes"<<endl;
        else cout <<"no"<< endl;
    }
    return 0;
}