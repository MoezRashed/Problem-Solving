    #include <bits/stdc++.h>
    #define endl '\n'
    #define ii pair<int,int>
    #define vi vector<int>
    #define vb vector<bool>
    #define pb push_back
    #define vii vector<ii>
    #define lli long long int
    #define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #define ins insert
    #define mp make_pair
     
    using namespace std;
     
    int main()
    {
        fastio
        int n;
        cin >> n;
        lli a[n+1] , sorted[n+1];
     for (int i = 0 ; i < n ; i++)
        {
           cin >> a[i];
           sorted[i] = a[i];
        }
        sort(sorted , sorted + n);
        int first = 0 , left , right , f1 = 0 , flag = 0;
        for (int i = 0 ; i < n ;i++) if (a[i] != sorted[i]) f1 = 1;
        if (f1 == 0) 
        {   
            cout << "yes" <<endl;
            cout << "1 1" <<endl;
            return 0 ;
        }
        for (int i = 0 ; i < n ; i++)
        { 
            if (first==0 && a[i]>a[i+1] && i+1 < n)
            {
                first = 1;
                left = i ;
                right = i + 1;
                continue;
            }
            if (first==1 && a[i]>a[i+1] && i+1 < n) right ++;
        }

        sort (a + left   , a + right + 1 );

        for (int i = 0 ; i < n ;i++) if (a[i] != sorted[i]) flag= 1;

        if (flag == 1)   cout << "no"<<endl;
        else 
        {
        cout << "yes"<<endl;
        cout<< left + 1 <<' ' << right + 1 <<endl;
        }
        return 0;
    }

