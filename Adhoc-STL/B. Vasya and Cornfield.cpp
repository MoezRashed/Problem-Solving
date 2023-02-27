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

int main()
{
    int n , d , m    ;
    cin >> n >> d    ;
    cin >> m         ;
    int xtemp , ytemp;
    int check = (2*n - d) ; 
    
    for (int i = 0 ; i < m ; i++)
    {
        cin >> xtemp >> ytemp;
        if (((xtemp + ytemp) >= d && (xtemp + ytemp)<= check) && ((xtemp - ytemp) >= -d && (xtemp - ytemp)<= d)) cout << "YES" << endl;
        else cout << "NO" <<endl; 
    }

    return 0;
}