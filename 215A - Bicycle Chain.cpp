// contest: Codeforces Round #132 (Div. 2), problem: (A) Bicycle Chain, Accepted, #, Copy


#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   int m;
   cin>>m;
   int b[m];
   for(int i=0;i<m;i++) cin>>b[i];
   
   int max = 0,c=0;
 
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             float v = b[j]*1.0/a[i];
             int val = b[j]/a[i];
             
             if(val==v){
                  
                  if(val>=max) {
                       max =val;
                  }
             }
        }
   }
   
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
               float v = b[j]*1.0/a[i];
                  if(v==max) {
                       c++;
                  }
        }
   }
   cout<<c;
    return 0;
}
