#include <bits/stdc++.h>
#define endl '\n'
#define ii pair<int,int>
#define vi vector<int>
#define vb vector<bool>
#define pb push_back
#define vii vector<ii>
#define lli long long int
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ins insert
#define mp make_pair

using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n < 3) 
    {
        cout << "NO" <<endl;
        return 0;
    }

    lli ar[n+1];

    for(int i = 0 ; i < n ; i++) cin >> ar[i];
    sort(ar , ar + n);

    bool flag = false;

    for(int i = 0 ; i < n - 2 ; i++)
        if (ar[i] + ar[i+1] > ar[i+2]) 
        {
            flag = true;
            break;
        }
        
    if(flag == true) cout << "YES" <<endl;
    else cout << "NO" <<endl;
    return 0;
}