#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
   for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    cout<<"*";
    if(i!=n-1){
    for(int j=(2*n-3)-2*i;j>0;j--){
        cout<<" ";
    }
    cout<<"*";
    }
     
    cout<<endl;
   }
}
