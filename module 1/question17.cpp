#include <bits/stdc++.h> 
using namespace std;
int main()
{
   int arr[26]={0};
   string s;int k=0;
   cin>>s;
   for(int i=0;i<s.length();i++){
      if(arr[s[i]-97]==0){
        arr[s[i]-97]++;
        k++;
      }
   }
   
   if(k%2==0){
    cout<<"CHAT WITH HER!";
   }else{
    cout<<"IGNORE HIM!";
   }
}
