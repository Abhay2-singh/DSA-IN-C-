#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\neneter the numebr=";
    cin>>n;
    int i=2;
    while (i<=2)
    {
        if (n%i==0)
        {
            cout<<"\nnumber is not prime number="<<i;
        }
        else{
            cout<<"\nnumber is prime="<<i;
        }
        i=i+1;  
    }
    return 0;
    
}