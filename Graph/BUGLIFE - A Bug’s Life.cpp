#include <bits/stdc++.h>
#include <vector>

using namespace std;
vector <int> ar[2001];
int vis[2001] , col[2001];
bool bidfs(int v , int c)
{
    vis[v] = 1;
    col[v] = c;

    for(int child : ar[v])
    {
        if (vis[child] == 0)
        {
            bool res = bidfs(child , c ^ 1);
            if ( res == false) return false;
        }
        else 
        {
            if (col[v] == col[child]) return false;
        }
    }
    return true;
}

int main()
{
    int t , n , m , a , b;
    cin >> t;
    for (int i = 1 ; i <= t ;i++)
    {
        cout << "Scenario #"<< i << ':'<<endl;
        cin >> n >> m;
        for (int j = 1 ; j <= n ; j++) 
        {   ar[j].clear(); 
            vis[j] = 0;
        }

        for (int j = 1 ; j <= m ; j++) 
        {   cin >> a >> b; 
            ar[a].push_back(b); 
            ar[b].push_back(a);
        }

        bool ccflag = true;
        for (int j = 1 ; j <= n ; j++)
        {
            if (vis[j] == 0) 
            {
                bool res = bidfs( j , 0);
                if(res == false)
                  {
                        ccflag = false;
                  }
            }
        }
        if (ccflag == true) cout<<"No suspicious bugs found!" <<endl;
        else cout <<"Suspicious bugs found!"<<endl;
    }
    return 0;
}