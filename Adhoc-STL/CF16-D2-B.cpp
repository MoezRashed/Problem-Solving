#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool cmp (pair < int , int> a , pair < int, int > b)
{
    return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector < pair < int , int > > matches;
    int n , m , index = 0 , total = 0; 
    cin >> n >> m;
    for (int i = 0 ; i < m ; i++)
    {
        int ai , bi;
        cin >> ai >> bi;
        matches.push_back(make_pair(ai , bi));
    }
    sort (matches.begin(), matches.end(), cmp);

    while (n>0 && index < m)
    {
        if (matches[index].first <=n)
        {
            total += matches[index].first * matches[index].second ;
            n-=matches[index].first;
        }
        else 
        {
            total += n * matches[index].second ;
            break;
        }
        index++;
    }
    cout << total << endl;
    return 0 ;
}