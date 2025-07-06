#include<iostream>
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r){
    int num=factorial(n);
    int deno=factorial(r)*factorial(n-r);
    return num/deno;
}
using namespace std;
 int main(){
    int n,r;
    cout<<"\nenter the number you want to find the NCR=";
    cin>>n>>r;
    cout<<"\nanswer is ="<<ncr(n,r);
    return 0;
    
 }