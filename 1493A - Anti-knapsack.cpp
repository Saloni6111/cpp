//  contest: Codeforces Round #705 (Div. 2), problem: (A) Anti-knapsack, Accepted, #, Copy


#include<bits/stdc++.h>
using namespace std;
int main(){
     int t,n,k;
     cin>>t;
     while(t--){
          vector<int>v;
          
          cin>>n>>k;
          for(int i=k+1;i<=n;i++) v.push_back(i);
          
          for(int i=1;i<k;i++){
               int c = (k-i);
                    if(c>i && c<k);
                    else v.push_back(i);
          }
          
          cout<<v.size()<<endl;
          for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
          cout<<endl;
     }
     
     return 0;
}
