#include <iostream>

using namespace std;

int main()
{
    int n,a,cnt=0;
    cin>>n>>a;
    int arr[n];
    
    for(int i=0;i<n;i++) cin>>arr[i];
    
    a=a-1;
    
    if(arr[a]) cnt++;
    
    for(int i=1;i<n;i++){
         int prev,next;
         prev=a-i;
         next=a+i;
         
         if(prev>=0 || next<n){
              if(prev>=0 && next<n){
                   if(arr[prev]==1 && arr[next]==1) cnt+=2;
              }
              else if(prev>=0 && arr[prev]==1)  cnt++;
              else if(next<n && arr[next]==1) cnt++;
              
         }
    }
    
    cout<<cnt<<endl;
    return 0;
}
