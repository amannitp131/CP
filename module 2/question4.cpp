#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,odd=0,even=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]%2==0){
        even++;
      }else{
        odd++;
      }
    }
    if(odd==0 || (even==0 && odd%2==0)  ){
        cout<<"NO"<<endl;
    }else{
       cout<<"YES"<<endl; 
    }
  }
    
}
