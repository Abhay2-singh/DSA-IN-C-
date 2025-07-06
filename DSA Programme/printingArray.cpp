#include<iostream>
using namespace std;
int printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int  arr[15]={2,3};
    int n=15;
    cout<<printArray(arr,15);
}