#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    char freq[3] = {'A' , 'B' , 'C'};
    int freqarray[3]={0,0,0};
    string s1 , s2 , s3;
    char m1 , m2 , m3;
    cin >> s1 >> s2 >> s3;
    if (s1[1]=='>')  m1 = s1[0]; // A
    else m1 = s1[2];
    if (s2[1]=='>')  m2 = s2[0]; // A
    else m2 = s2[2];
    if (s3[1]=='>')  m3 = s3[0]; // C 
    else m3 = s3[2];

    for (int i = 0 ; i < 3 ; i++)
    {    
       if (m1 == freq[i]) freqarray[i]++; // A == A  
       if (m2 == freq[i]) freqarray[i]++;// B  == A  //
       if (m3 == freq[i]) freqarray[i]++;// A == A
    }
    if(freqarray[0]==1 &&freqarray[1]==1 &&freqarray[2]==1 ) 
    {
        cout << "Impossible" ;
        return 0;
    }
    
   /* for (int i = 0 ; i < 3 ; i++)
    {
        cout << freqarray[i]<<endl;
    }*/
    int max , min , mid ;
    for (int i = 0 ; i < 3 ; i++)
    {   
        if (freqarray[i] > 2) 
        { cout << "Impossible" ;
            return 0;}
        if (freqarray[i] == 0) min = i;
        if (freqarray[i] == 1) mid = i;
        if (freqarray[i] == 2) max = i;
    }
    cout << freq[min] << freq[mid] <<freq[max];
    return 0 ;
}