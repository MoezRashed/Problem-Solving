#include <bits/stdc++.h>
#define endl '\n'
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
#define vii vector<ii>
#define lli long long int
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ins insert
#define mp make_pair
#define s(a) scanf("%d",&a)
#define p(a) printf("%d",a)

using namespace std;

vi prime;
bool is_prime[90000001];

void seive()
{
    int maxn = 90000000;
    is_prime[0]=is_prime[1]=true;
    for (int i = 2 ; i*i <= maxn ; i++)
    {
        if(!is_prime[i])
        {
            for (int j = i*i ; j <= maxn ; j+=i) is_prime[j] = true;
        }
    }
    for (int i = 2 ; i<=maxn ; i++)
    {
        if (is_prime[i]== false) prime.pb(i);
    }
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q , x;
    cin >> q;
    seive();
    while (q--)
    {
        cin >> x;
        cout << prime[x-1] << endl;
    }
    return 0;
}