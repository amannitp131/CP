#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    if(a<=2){
        cout<<"1"<<endl;
    }else {
        if((a-2)%b==0){
            cout<<((a-2)/b)+1<<endl;
        }else{
           cout<<((a-2)/b)+2<<endl; 
        }
    }
   
  }
    
}
