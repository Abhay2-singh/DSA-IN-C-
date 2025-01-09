#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
        return ;    //base condition 
    }
    print(n-1);  //recursive relation
}
int main(){
    int n;
    cout<<"\nenter the number=";
    cin>>n;
   print(n);
   return 0;

}