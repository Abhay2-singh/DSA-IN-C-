#include<iostream>
using namespace std;
 int main(){
    int ans=1;
    int a;
    cout<<"\nenter the first number";
    cin>>a;
    int b;
    cout<<"\nenter the second number";
    cin>>b;
    for(int i=1; i<=b; i++){
        ans=ans*a;
    }
    cout<<"\nanswer is="<<ans;nc
 }