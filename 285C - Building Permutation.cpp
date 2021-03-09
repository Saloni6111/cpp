//contest: Codeforces Round #175 (Div. 2), problem: (C) Building Permutation, Accepted, #, Copy


#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
     ll n;
     cin>>n;
     ll a[n];
     ll ans =0;
     for(ll i=0;i<n;i++) {
          cin>>a[i];
     }
     
     sort(a,a+n);
     
     for(ll i=0;i<n;i++) {
          ans += abs(i+1-a[i]);
     }
     cout<<ans;
    return 0;
}
