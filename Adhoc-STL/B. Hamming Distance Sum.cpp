#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <utility>
#include <math.h>
#define lli long long int
#define endl '\n'
#define ii  pair<int,int>
#define vi  vector<int>
#define vb  vector<bool>
#define pb  push_back
#define vii vector<ii>
#define vl  vector<lli>
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ins insert
#define mp  make_pair
    
using namespace std;
    
int main()
{
    
    fastio                    ;
    string first              ;
    string second             ;
    cin >> first              ;
    cin >> second             ;
    
    int num1 = first.length ();
    int num2 = second.length();
    lli ans  = 0              ;  
    lli arr_zeros[200010]     ;  
    lli arr_ones[200010]      ;
    
    for (int i = 0 ; i < num2 ; i++)
    {   
        arr_zeros[i + 1] = arr_zeros[i] + (second[i] == '0');
        arr_ones[i + 1] = arr_ones[i] +   (second[i] == '1');
    }
    
    for (int i = 0 ; i < num1 ; i++)
    {
        if (first[i] == '0') ans+=arr_ones[num2 - num1 +i+1]-arr_ones[i] ;
        else                ans+=arr_zeros[num2 - num1 +i+1]-arr_zeros[i];
    }
    
    cout << ans << endl       ;
    return 0                  ;
    
}