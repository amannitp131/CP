

#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    int n,s=0;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i].substr(0,1)=="T"){
            s+=4;
        }else if(arr[i].substr(0,1)=="C"){
            s+=6;
        }else if(arr[i].substr(0,1)=="O"){
            s+=8;
        }else if(arr[i].substr(0,1)=="D"){
            s+=12;
        }else{
            s+=20;
        }
    }
    cout<<s;
  
        
    }
  


