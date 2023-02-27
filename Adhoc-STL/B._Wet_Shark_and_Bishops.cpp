#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <utility>
#include <math.h>
#include <algorithm>
#define lli long long int
#define ll long long 
#define endl '\n'
#define ii pair<int,int>
#define vi vector<int>
#define vs vector<string>
#define vb vector<bool>
#define pb push_back
#define vii vector<ii>
#define vl  vector<lli>
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ins insert
#define mp make_pair

using namespace std;

int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int main()
{
    map <int , int> backward;
    map <int , int> forward ;
    int n , x, y, count     ;
    cin >>      n           ;

    for (int i = 0 ; i < n ; i++)
    {
        cin >> x >> y       ;
        count+=backward[x+y];
        backward[x+y]++     ;
        count+= forward[x-y];
        forward[x-y]++      ;

    } 
    // for (auto i : forward)
    // {
    //     count+= nCr(i.second,2)    ;
    // }
    // for (auto i : backward)
    // {
    //     count+= nCr(i.second,2)    ;
    // }
    cout << count           ;
    return 0;
}