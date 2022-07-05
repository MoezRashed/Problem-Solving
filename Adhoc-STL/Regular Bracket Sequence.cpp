#include <bits/stdc++.h>
#include <stack>

using namespace std;
int main()
{   int total = 0;
    stack<char> opbrac;
    string input ;
    cin>> input ;
    for (int i = 0; i< input.length() ; i++)
    {
        if(input[i] == '(') opbrac.push(input[i]);
        if(input[i] == ')')
        {
            if(!opbrac.empty())
            {
                opbrac.pop();
                total += 2;
            }
        }
    }
    cout << total <<endl;


    return 0;
}