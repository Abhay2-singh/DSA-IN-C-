#include<iostream>
using namespace std;
void print(int arr[],int n,int start=0){
    for(int i=0; i<n; i++){
        cout<<endl;
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5]={2,3,4,5,6};
    int size=5;
    print(arr,size);
    return 0;
}