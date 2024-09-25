#include<iostream>
using namespace std;
int main(){
    int k,s=1,r=2,ans=1;
    cin>>k;
    while(k>s){
        s=s+r;
        r++;
        ans++;
    }
    cout<<ans;
}