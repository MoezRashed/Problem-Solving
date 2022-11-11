#include <bits/stdc++.h>
#include <vector>
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
    fastio
    unsigned long long n , x , totalhrs = 0;
    cin >> n >> x;
    vi chapters;

    for (int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        chapters.pb(x);
    }
    sort(chapters.begin(),chapters.end());
    for (int i = 0 ; i < n ;i++)
    {   if(x > 1)
        {
            totalhrs+= (x * chapters[i]);
            x--;
        }
        else totalhrs+=chapters[i];
    }
    cout << totalhrs<<endl;
    return 0;
}