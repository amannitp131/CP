#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;vector<int> arr;
    cin>>s;
    for(int i=0;i<=s.length()-1;i+=2){
        arr.push_back(s[i]);
        }
        sort(arr.begin(),arr.end());

    for(int i=0;i<=s.length()-1;i+=2){
        s[i]=arr[(i+1)/2];
        }
        cout<<s;
    
}