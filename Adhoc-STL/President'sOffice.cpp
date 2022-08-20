#include<bits/stdc++.h>
#include<set>

using namespace std;

int main()
{
    int n , m;
    char c;
    cin >> n >> m >> c;
    set<char> surrond;
    char a[n][m];
    for (int i = 0 ; i < n ; i++)
      for (int j = 0 ; j < m ; j++) cin >> a[i][j];
    
    for (int i = 0 ; i < n ; i++)
      for (int j = 0 ; j < m ; j++) 
      {
        if (a[i][j]==c)
        {
            if(i-1 >= 0) surrond.insert(a[i-1][j]);
            if(j-1 >= 0) surrond.insert(a[i][j-1]);
            if(i+1  < n) surrond.insert(a[i+1][j]);
            if(j+1  < m) surrond.insert(a[i][j+1]);
        }
      }
    surrond.erase('.');
    surrond.erase(c);
    cout<<surrond.size()<<endl;
    return 0;
}