#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b && b==c){
            cout<<"YES"<<endl;
            cout<<a<<""<<b<<" "<<c;
        }else if(a!=b && b!=c && c!=a){
            cout<<"NO"<<endl;
        }else{
            if((a==b && a>c)||(a==c && a>b) || (c==b && b>a) ){
                cout<<"YES"<<endl;
            }else{
              cout<<"NO"<<endl;  
            }
        }
        
    }
    
}
