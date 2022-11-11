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
    fastio
    vi waste;
    int n , m , k , t , c = 1;
    cin >> n >> m >> k >> t;
    while(k--)
    {
        int x , y , res;
        cin >> x >> y;
        res = ((x-1)*m)+y;
        waste.pb(res);
    }
    sort(waste.begin(), waste.end());
    while (t--)
    {
        int q , w , flag = 0 , r= 0;
        cin >> q >> w;
        r = ((q-1)*m)+w;
        vi::iterator it = lower_bound(waste.begin(), waste.end(), r);
        if (*it == r) 
        {
            cout << "Waste"<<endl;
            continue;
        }
        int CurrentWaste = it - waste.begin() , myplace = r - CurrentWaste;
            if (myplace % 3 == 0) cout <<"Grapes" <<endl;
            if (myplace % 3 == 1) cout <<"Carrots" <<endl;
            if (myplace % 3 == 2) cout <<"Kiwis" <<endl;
    }
    return 0 ;
}