#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
int main(){
     int n,cnt=1,c=1;
     cin>>n;
     pair<int,int>v[n];
     for(int i=0;i<n;i++){
          cin>>v[i].first>>v[i].second;
     }
     while(--n){
          if((v[n].first==v[n-1].first) && (v[n].second==v[n-1].second)){
               cnt+=1;
               if(cnt>c) {
                    c=cnt;
               }
          }
          else {
               cnt=1;
          }
     }
     cout<<c;
    return 0;
}
