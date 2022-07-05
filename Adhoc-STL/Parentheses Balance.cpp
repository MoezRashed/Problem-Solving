#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main ()
{   
    int t   ;
    cin >> t;
    getchar();
    for (int i = 0 ; i < t ; i++)
    {   bool flag =true;
        stack <char> s;
        char x[1000] ;
        gets(x);
        int l =strlen(x);
        for (int j = 0 ; j < l ; j++)
        {
            if (x[j] == '[' || x[j]== '(')
            {
                s.push(x[j]);
            }
            else if ( x[j] == ']' || x[j]==')' ) 
            {   
                if      (x[j] == ']' && s.top() == '[' &&!s.empty() ) s.pop();
                else if (x[j] == ')' && s.top() == '(' &&!s.empty() ) s.pop();
                else 
                {           flag = false;
                            break;
                }
            }
        }
        if(s.empty() && flag) cout <<"Yes" <<endl;
        else cout<<"No"<<endl;
    }
}