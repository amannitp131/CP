

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        
    
    int n;
    cin>>n;
    vector<int>arr;
    int i=1,k=0;
    while(n>0){
        if(n%10!=0){
            k++;
            arr.push_back((n%10)*i);
        }
        i=i*10;
        n=n/10;
        
    }
    cout<<k<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}
}