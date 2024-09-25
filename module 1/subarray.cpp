#include <bits/stdc++.h>
using namespace std;



int main() {
    int arr[4]={0,1,2,3};
  int start=0,end=3;
  while(start<=end){
    for(int i=start;i<=end;i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=start+1;i<=end;i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=start;i<=end-1;i++){
        cout<<arr[i];
    }
    cout<<endl;
    start++;
    end--;
  }


    return 0;
}
