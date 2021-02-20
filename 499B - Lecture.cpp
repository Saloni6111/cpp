 contest: Codeforces Round #284 (Div. 2), problem: (B) Lecture, Accepted


#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,m;
    string x,y;
    cin>>n>>m;
    map<string, string> ans;
    for(int i=0;i<m;i++){
         cin>>x>>y;
         size_t l1= x.size();
         size_t l2= y.size();
         //cout<<l1<<" "<<l2;
         if(l1<=l2) ans[x]=x ;
         else ans[x]=y;
         
    }
    for(int i=0;i<n;++i){
         cin>>x;
         cout<<ans[x]<<" ";
         
    }
    return 0;
}
