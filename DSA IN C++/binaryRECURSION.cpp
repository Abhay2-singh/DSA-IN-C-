#include<iostream>
using namespace std;
bool binarySearch(int *arr,int s,int e,int k){
    // for(int i=0; i<=e; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    //base case 
    if(s>e)
    return false;
    
    int mid =s+(e-s)/2;
    // cout<<"mid is ="<<arr[mid]; //find the mid value of array

    //base case 
    if(arr[mid]==k)
    return true;

    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,mid-1,e,k);
    }

}
int main(){
    int arr[6]={2,4,6,10,14,16};
    int key=16;
    int size=6;
    cout<<"found or not="<<binarySearch(arr,0,5,key);
    return 0;

}