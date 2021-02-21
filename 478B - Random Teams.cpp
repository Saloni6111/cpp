#include <bits/stdc++.h>
#define ll long long
ll p(ll);
using namespace std;


ll p(ll a){
         return(a*(a-1)/2);
    }
    
int main()
{
    
    ll n,m;
    cin>>n>>m;
    ll max = p(n-(m-1));
    ll min = p(n/m)*(m-n%m)+ p(n/m+1)*(n%m);
    
    cout<<min<<" "<<max;
    return 0;
}
