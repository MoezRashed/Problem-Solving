#include <bits/stdc++.h>
#include <map>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n , m ,vasya = 0 , petya = 0;
    map<long long , long long> index; 
    cin >> n >> m;
    for (int i = 1 ; i <= n; i++)
    {
        int x ;
        cin >> x;
        index[x]= i;
    }
    for (int i = 1 ; i <= m ;i++)
    {       
        int x ;
        cin >> x;
        vasya += index[x];
        petya += n - index[x];
    }
    cout << vasya<< " " << petya ;
    return 0;
}