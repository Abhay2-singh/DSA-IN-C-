#include<iostream> 
using namespace std;
int main(){
    int n;
     cin>>n;
     int a=0;
      int b=1;
      cout<<"\na:"<<a<<"b:"<<b<<endl;
      for(int i=1; i<=n; i++){
        int next=a+b;
        cout<<next<<endl;
        a=b;
        b=next;
      }
      return 0;
}