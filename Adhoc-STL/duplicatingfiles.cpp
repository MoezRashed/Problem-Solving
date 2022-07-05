#include <bits/stdc++.h>
#include <map>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int j = 0 ; j < t ; j++)
    {   int n;
        cin >> n;
        map<string , int > hamo;
        vector<int> v;
        for (int i = 0 ; i <n ; i++)
        {
            string x; 
            int y;
            cin >> x >> y;
            if(hamo[x] == 0) hamo[x] = y;
            if(hamo[x] > y)  hamo[x] = y;
        }
        auto it = hamo;
        for (auto it = hamo.begin() ; it != hamo.end() ;it++)
        {
            v.push_back(it->second);
            
        }
        sort(v.begin() , v.end());
        for (auto x : v)
        cout << x << " ";
        cout<<endl;
    }
    return 0;
}
