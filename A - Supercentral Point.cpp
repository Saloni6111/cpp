//  109019373	 Mar/03/2021 20:53UTC+5.5 	A - Supercentral Point	GNU C++17 (64)	Accepted	30 ms	0 KB


#include<bits/stdc++.h>
using namespace std;
int main(){
     
     int n,x[202],y[202],i,j,c=0;
     cin>>n;
     
     for(i=0;i<n;i++)  cin>>x[i]>> y[i];
  
     for(i=0;i<n;i++){
       
          bool l=false,r=false,u=false,d=false;
       
          for(j=0;j<n;j++){
            
            if(x[i]==x[j] && y[i]<y[j]) u=true;
            else if(x[i]==x[j] && y[i]>y[j]) d=true;
            else if(x[i]>x[j] && y[i]==y[j]) l=true;
            else if(x[i]<x[j] && y[i]==y[j]) r=true;
            
          }
          
          if(l && r && u && d) c++;
     }
     
     cout<<c;
     return 0;
}
