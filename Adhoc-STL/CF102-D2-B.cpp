#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
int current = 11 , count = 0;
string s;
cin >> s ;
if(s.size() < 2)
{
    cout << count<<endl;
    return 0;
}
while (current >= 10)
{   
    current = 0;
    for (int i = 0 ; i<s.size();i++)
    {
        current += s[i] - '0';
    }
    s = to_string(current);
    count++;
}
cout << count;
return 0;
}