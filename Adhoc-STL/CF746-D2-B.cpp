#include <bits/stdc++.h>
#include <stack> 
#include <queue>
using namespace std;

int main()
{
queue <char> first;
stack <char> second;
int n = 0 ;
cin >> n;
string s ;
cin >> s ;
for (int i = n-1 ; i >= 0 ; i=i-2)
{
    second.push(s[i]);
}
for (int i = n-2 ; i >= 0 ; i=i-2)
{
    first.push(s[i]);
}
while (!first.empty())
{
    cout << first.front();
    first.pop();
}
while (!second.empty())
{
    cout << second.top();
    second.pop();
}
return 0 ;
}