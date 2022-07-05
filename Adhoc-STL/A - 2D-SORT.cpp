#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define s(a) scanf("%d",&a)

bool cmp( pair <int , int > a , pair < int , int > b)
{
    return (a.first < b.first) || ((a.first == b.first) && (a.second > b.second));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , t, xi, yi;
    vector <pair <int , int >> point;
    cin >> t;
    while(t--)
    {
        cin >> n ;
        for (int i = 0; i < n; i++)
        {
            s(a);
            s(b);
            point.push_back(make_pair(xi,yi));
        }
        sort(point.begin(),point.end(),cmp);
        for (int i = 0 ; i < n ; i++)
        {
            cout << point[i].first <<" "<< point[i].second<< endl;
        }
    }
return 0 ;
}