#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\enter the number you want to print the fabonacci series=";
    cin>>n;
    int sum=0;
    int a=0;
    cout<<a<<" "<<endl;
    int b=1;
    cout<<b<<" "<<endl;
    for(int i=1; i<=n; i++){
         sum=a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
    }
    return 0;
}