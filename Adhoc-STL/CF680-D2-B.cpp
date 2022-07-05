#include <bits/stdc++.h>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int n , a , total = 0 ;
    stack<int> befa;
    queue<int> afta;
    cin >> n >> a;
    int cities[n];
    for (int i = 0 ; i < n ; i++)
    {
        cin >> cities[i];
        if (i < (a - 1))
        {
            befa.push(cities[i]);
        }
        else if (i >=a)
        {
            afta.push(cities[i]);
        }
    }
 
    if(cities[a-1] == 1) total++;
    while(!befa.empty() && !afta.empty())
    {
        if (befa.top() == 1 && afta.front()== 1) total+=2;
        befa.pop();
        afta.pop();
    }
    if (befa.empty())
    {
        while(!afta.empty())
        {
            total+= afta.front();
            afta.pop();
        }
    }
    else if(afta.empty())
    {
        while(!befa.empty())
        {
            total+= befa.top();
            befa.pop();
        }
    }
    cout << total;
    return 0;
}
