#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    char a[n];
    
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
    
         if(a[i]=='L'){
              for(int j=i;j>=0;j--)
              {
                   if(a[j]=='#') break;
                   
                   a[j]='#';
              }
         }
         
         else if(a[i]=='R'){
              m=-1;
              for(int j=i+1;j<n;j++){
                   if(a[j]=='L'){
                        m=j;
                        break;
                   } 
              }
              
              if(m==-1){
                   for(int j=i;j<n;j++){
                     a[j]='#';
                   }
              }
              
              else{
                   //cout<<i<<m<<endl;
                    for(int j=i;j<=m;j++)
                      a[j]='#';
                    if((m-i+1)%2 !=0 ){
                     //    cout<<"yes";
                     a[(m+i)/2]='.';
                    }
              }
              
         }
         
         
    }
    
    
    int cnt =0;
    for(int i=0;i<n;i++)
    {
         if(a[i]=='.') cnt++;
         //cout<<a[i];
    }
    
    
    cout<<cnt<<endl;
    return 0;
}
