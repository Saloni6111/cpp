 //contest: Codeforces Round #138 (Div. 2), problem: (B) Array, Accepted .
  
  
  
#include<iostream>
#include<cmath>
#include<set>
using namespace std;
set<int>F,L;
int main()
{
    int n,m,f,l;
    cin>>n>>m;
    int a[n];
    bool first=false , last=false;
    for(int i=1;i<=n;i++){
         cin>>a[i];
    }
    for(int i=1;i<=n;i++){
         L.insert(a[i]);
         if(L.size()==m){
              last=true;
              l = i;
              break;
         }
    }
    for(int i=l;i>=1;i--){
         F.insert(a[i]);
         if(F.size()==m){
              first=true;
              f = i;
              break;
         }
    
    }
    
    if(first==true && last==true) cout<<f<<" "<<l;
    else cout<<-1<<" "<<-1;
    return 0;
}
