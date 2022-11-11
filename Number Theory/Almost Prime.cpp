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

vb prime(5000 , true);
vi p;

void seive()
{
    prime[0] = prime[1] = false;
    int maxn = 5000;
    for (int i = 2 ; i <= maxn ; i++)
    {
        if (prime[i])
        {
            p.pb(i);
            for (int j = i*i ; j<=maxn ; j+=i) prime[j] = false;
        }
    }
}

int main()
{
    fastio
    seive();
    int x , cn = 0;
    cin >> x;
    for (int i = 1 ; i <= x ; i++) 
    {
        int c = 0;
        for (int j = 0 ; p[j] <= i ; j++)
        {
            if(i % p[j] == 0 ) c++;
        }
        if (c == 2) cn++;
    }
    cout << cn << endl;
    return 0;
}