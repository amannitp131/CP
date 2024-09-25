#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    while(b>0){
        if(a%10!=0){
            a-=1;
        }else{
            a/=10;
        }
        b--;
    }
    cout<<a;

    return 0;
}
