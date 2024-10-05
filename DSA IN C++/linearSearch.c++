//write a programme for linear search 
#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 0;
        }
    }
    return 0;
}
int main(){
    int arr[10]={2,3,4,5,6,7,8,9,11,12};
    cout<<"\nenter the element you want to search it=";
    int key;
    cin>>key;
    bool found =search(arr,10,key);
    if(found){
        cout<<"\nkey is present";
    }
    else{
        cout<<"\nkey is not present";
    }
}