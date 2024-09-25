#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k=0;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
       cin >> arr[i];
       if(arr[i]==1){
           k++;
           break;
       }
    }
    if(k==1){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }

    
    
}
