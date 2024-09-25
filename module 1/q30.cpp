#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
    long long int n;
    cin>>n;
    cout<<"2"<<endl;
    cout<<n-1<<" "<<n<<endl;
    long long int avg=ceil((2*n-1)/2)+1;
    while(avg>2 ){
       
        n=n-1;
        if((avg+n)%2==0){
cout<<avg<<" "<<n<<endl;
 avg=(avg+n)/2;
        }else{
            cout<<avg<<" "<<n-1<<endl;
            if(n==2){
                break;
            }
           
        }
      
    }
}
}