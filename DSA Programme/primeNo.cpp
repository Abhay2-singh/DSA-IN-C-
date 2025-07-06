#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
 int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"\nnumber is Prime";
    }
    else{
        cout<<"\nnumber is not prime";
    }
    return 0;
 }