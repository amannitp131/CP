#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,se=0,so=0;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=0){
            se=se+(arr[i]/2);
        }else{
            so=so+(arr[i]/2);
        }
     }
     if(se>=abs(so)){
        int t=se-abs(so);
        for(int i=0;i<n;i++){
        if(arr[i]<0 && t!=0 && arr[i]%2!=0){
            arr[i]=(arr[i]/2)-1;
            cout<<(arr[i])<<endl;
            t--;
            continue;
        }
        cout<<(arr[i]/2)<<endl;
     }
     }else{
        int t=abs(so)-se;
        for(int i=0;i<n;i++){
        if(arr[i]>=0 && t!=0 && arr[i]%2!=0){
            arr[i]=(arr[i]/2)+1;
           cout<<(arr[i])<<endl;
            t--;
            continue;
        }
        cout<<(arr[i]/2)<<endl;
     }
     }
     

    return 0;
}
