        #include <bits/stdc++.h>
        #include <vector>
        using namespace std;
        int main()
        {   
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            long long n , m;
            cin >> n >> m;
            long long v[10000001];
            long long sumf[1000001] , sumb[19001011];
            for (int i = 1 ; i <= n ; i++) cin >> v[i];
            for (int i = 2 ; i <= n ; ++i)
            sumf[i]+=sumf[i-1]+max(0LL , v[i-1]-v[i]);
            for (int i = n-1 ; i ; --i) 
            sumb[i]+=sumb[i+1]+max(0LL , v[i+1]-v[i]);
            while (m--)
            {
                long long s , t, fdamage=0;
                cin >> s >> t;
                if(s < t) fdamage = sumf[t] - sumf[s];
                else fdamage = sumb[t] - sumb[s];
                cout<<fdamage<<endl;
            }
            return 0;
        }