// By salonijaiswal3838, contest: Codeforces Round #177 (Div. 1), problem: (A) Polo the Penguin and Strings, Accepted



#include <bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
    
int main()
{
     ll n;
     int k;
     cin>>n>>k;
     vector<char>str;
     if(k>n || k>26 ||(n !=1 && k==1)){
          cout<<-1;
          return 0;
     } 
     int end = (n-k+2);
      //cout<<end<<endl;
     for(int i=0;i<end;i++)
     {
          if(i%2==0) str.push_back('a');
          else str.push_back('b');
     }
     str.push_back('c');
     //cout<<str[end]<<endl;
     for(int i=end+1;i<=n;i++){
          str.push_back(str[i-1]+1);
     }
     for(int i=0;i<n;i++)
      cout<<str[i];
    return 0;
}
