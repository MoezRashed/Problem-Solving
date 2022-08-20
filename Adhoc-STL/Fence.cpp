    #include <bits/stdc++.h>
    #include <vector>
    using namespace std;
     
    int main()
    {
        int n , k , min = INT_MAX, id = 0;
        cin >> n >> k;
        vector<int> h(n+1) , pref(n+1),final(n+1);
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> h[i];
        }
        for (int i = 1 ; i <= n ; i++)
        {   
            pref[i] = pref[i-1] + h[i];
        }
        for (int i = 1 ; i <= n - k + 1 ; i++)
        {
              final[i] = pref[i+k-1] - pref[i-1];
              if(final[i] < min)
              { min = final[i];
                    id = i;
              }
        }
        cout << id <<endl;
        return 0;
    }