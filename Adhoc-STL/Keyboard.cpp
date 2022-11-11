#include <bits/stdc++.h>
#include<set>
#include<utility>
#include<math.h>
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

double getdist( int x1 , int x2 , int y1 , int y2)
{
    return sqrt( pow((x2 - x1),2) + pow ((y2 - y1),2));
}

int main()
{
    fastio

    vii keyboard[26];
    vi found(26 , -1);
    vii shift;

    int n , m , x , q ,count = 0;

    cin >> n >> m >> x;

    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
        {
            char m;
            cin >> m;
            if(m == 'S') shift.pb({i,j});
            else 
            {
                keyboard[m-'a'].pb({i,j});
            }
        }

    cin >> q;

    while(q--)
    {
        char c;
        cin >> c;
        int h = tolower(c)- 'a';
        if(keyboard[h].size() == 0) 
        {
            cout<<-1<<endl;
            return 0 ;
        }
        if(isupper(c))
        {
            if(found[h] != -1)
            {
                count += found[h];
            }
            else 
            {
                if(shift.size() == 0) 
                {
                    cout<<-1<<endl;
                    return 0;
                }
                bool flag = false;
                for(auto it : keyboard[h])
                {
                    int x1 = it.first;
                    int y1 = it.second;
                    for(auto k : shift)
                    {
                        int x2 = k.first;
                        int y2 = k.second;
                        if(((x1 - x2)*(x1 - x2) +(y2 - y1)*(y2 - y1)) <= x * x)
                        {
                            flag = true;
                            break;
                        }
                    }
                }
                if(!flag)
                {
                    count++;
                    found[h] = 1;
                }
                else found[h] = 0 ;
            }
        }
    }
    cout << count <<endl;
    return 0;
} 