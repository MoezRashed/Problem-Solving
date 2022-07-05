#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector<pair<string , string >> station;
    vector<pair<string , string >> command;
    int n , m ;
    cin >> n >> m;
    for (int i = 0 ; i < n ; i++)
    {   string x , y;
        cin >> x >> y;
        y+=';';
        station.push_back(make_pair(x , y));
    }
    for (int i = 0 ; i < m ; i++)
    {   string x , y;
        cin >> x >> y;
        command.push_back(make_pair(x , y));
    }
    for (int i = 0 ; i < m ; i++){
      for (int j = 0 ; j < n ; j++)
      {
          if (command[i].second == station[j].second)
          {
              cout<< command[i].first << " "<< command[i].second << " #" << station[j].first<<endl;
              break;
          }
      }
    station.pop_back();
    }
    return 0;
}