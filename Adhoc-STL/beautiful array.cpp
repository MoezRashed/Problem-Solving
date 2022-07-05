#include <bits/stdc++.h>
#include <set>
#include <vector>
#include <iterator>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set < int > found;
    vector<int > current;
    auto it = found.begin();
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++)
    {
        int a ;
        cin >> a;
        current.push_back(a);
        found.insert(a);
    }
     for (int i = 0 ; i < n ; i++)
    {
        if(found.find(current[i]*current[i+1]) == found.end() && i < n-1) 
        {
            cout <<"NO";
            return 0 ;
        }
    }
     cout << "YES"; 

    return 0;
}