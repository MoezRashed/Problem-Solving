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
    int a , b , c , d , adjust1 , adjust2;
    cin >> a >> b >> c >> d      ;

    adjust1 = a * d - c * b   ;
    adjust2 = c * b - a * d   ;

    if (adjust1 > 0 ) cout << adjust1/__gcd(adjust1 , a * d) <<"/"<<a*d/__gcd(adjust1 , a * d) ;
    else              cout << adjust2/__gcd(adjust2 , c * b) <<"/"<<c*b/__gcd(adjust2 , c * b) ;

    return 0;
}
