#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k=0,max=-1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i>0){
            if(arr[i]>arr[i-1]){
                
            k++;
        }else{
            if(max<k){
                max=k;
            }
            k=0;
        }
        }
       
    }
    if(max<k){
                max=k;
            }
    cout<<max+1;
    return 0;
}
