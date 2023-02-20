    #include <bits/stdc++.h>
    #include <vector>
    #include<set>
    #include<utility>
    #include<math.h>
    #define lli long long int
    #define ll long long 
    #define endl '\n'
    #define ii pair<int,int>
    #define vi vector<int>
    #define vs vector<string>
    #define vb vector<bool>
    #define pb push_back
    #define vii vector<ii>
    #define vl  vector<lli>
    #define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #define ins insert
    #define mp make_pair
     
    using namespace std;
     
    int main()
    {
        fastio
        int n    = 0;
        ll  y    = 0;
        int flag = 0;
        int stop = 0;
        int zeros= 0;
     
        cin >> n    ;
        vs arr(n)   ;
     
        string non_beautiful;
        string answer       ;
        string last         ;
        
        for (int i = 0 ; i < n ; i++) 
        {
            cin >> arr[i]             ;
     
            if(arr[i] == "0") 
            {
                cout << "0"<<endl     ;
                return 0              ;
            }
            if(arr[i][0]!='1') 
            {
                non_beautiful = arr[i];
                flag          =    1  ;
            }
            for (int j = 1 ; j < arr[i].length() ; j++)
            {
             if (arr[i][j]!='0') 
                {
                    non_beautiful = arr[i];
                    flag          =   1   ;
                    break;
                }
            }  
            if(arr[i][0] == '1' && arr[i] != non_beautiful) zeros += (arr[i].length()-1);
        }
     
        for(int i = 0 ; i < zeros ; i++) answer+= "0";
     
        if (flag) last = non_beautiful + answer;
        else      last = "1"           + answer;  
     
        cout << last <<endl;
     
        return 0;
    }