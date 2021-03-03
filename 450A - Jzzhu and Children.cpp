// 109015286  	Mar/03/2021 20:06UTC+5.5	 450A - Jzzhu and Children	 GNU C++17 (64)	 Accepted	 31 ms	 100 KB


#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<pair<int,int>>q;
int main(){
     int n,m,a,ans;
     cin>>n>>m;
     
     for(int i=0;i<n;i++)
     {
          cin>>a;
          q.push_back(make_pair(a,i));
     }
     
     int j=0,k=0;
     
     while(n+j>k){
          if(q[k].first>m){
               q.push_back(make_pair(q[k].first-m , q[k].second));
               j++;
          }
          else{
               ans = q[k].second+1;
          }
          
          k++;
     }
     
     cout<<ans<<endl;
     return 0;
}
