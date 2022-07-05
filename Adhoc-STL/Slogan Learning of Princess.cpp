#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    map < string ,string > slogan ;
    int n , q;
    cin >> n ;
    getchar();
    for (int i = 0 ; i < n ; i++)
    {
        string s1 , s2 ;
        getline( cin, s1 );
        getline( cin, s2 );
        slogan[s1] = s2;
    }
    cin >> q ;
    getchar();
    for (int i = 0 ; i < q ; i++)
    {
        string leaderslogan;
        cin >> leaderslogan;
        cout<<slogan[leaderslogan]<<endl;
    }
    return 0;
}