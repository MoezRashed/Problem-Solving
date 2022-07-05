#include <bits/stdc++.h>
#include <deque>

using namespace std;

int main()
{   
    int t , cases = 1;
    cin >> t;
    while (t--)
    {
        int n , m ;
        cin >> n >> m;
        deque<int> d;
        cout<<"Case "<<cases<<":"<<endl;
        for (int i = 0 ; i < m ; i++)
        {
            string x;
            int y;
            cin >> x ;
            if (x =="pushLeft" || x=="pushRight") cin>> y;
            if (d.size() < n && (x =="pushLeft" || x=="pushRight"))
            {
                if (x == "pushLeft")
                {
                    d.push_front(y);
                    cout<< "Pushed in left: "<<y<<endl;
                } 
                else if(x == "pushRight")
                {
                    d.push_back(y);
                    cout<< "Pushed in right: "<<y<<endl;
                } 
            }
            else if (!d.empty() && (x == "popLeft" || x == "popRight"))
            {   auto it1 = d.begin();
                auto it = d.end()-1;
                if (x == "popLeft")
                {   
                    d.pop_front();
                    cout<< "Popped from left: "<<*it1<<endl;
                } 
                else if(x == "popRight")
                {   
                    d.pop_back();
                    cout<< "Popped from right: "<<*it<<endl;
                } 
            }
            else if(d.empty() && (x == "popLeft" || x == "popRight"))
            {
                cout<<"The queue is empty"<<endl;
            }
            else if(d.size() >= n && (x =="pushLeft" || x=="pushRight"))
            {
                cout<<"The queue is full"<<endl;
            }
           
        }
        cases++;
    }
    return 0;
}