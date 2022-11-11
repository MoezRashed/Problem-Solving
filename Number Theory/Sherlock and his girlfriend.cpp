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

void seive(int n)
{
    vi prime (n+2 , 1);
    prime[0] = prime[1] = 0;
    for (lli i = 2 ; i <= n+1 ; i++)
    {
        if (prime[i])
        {
            for (lli j = i*i ; j<=n+1 ; j+=i) prime[j] = 0;
        }
    }
    for (int i = 2 ; i <= n+1;i++) 
    {
       if(prime[i]== 1) cout << "1"<<' ';
       else cout<<"2"<<" ";
    }
}
int main()
{
    int x;
    cin >> x;
    if(x <= 2) cout<<"1"<<endl;
    else cout<<"2"<<endl;
    seive(x);
    return 0;
}
