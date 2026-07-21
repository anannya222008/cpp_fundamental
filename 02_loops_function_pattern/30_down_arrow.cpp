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
        for(int j= 2*(n-i)-5;j>0;j--){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
}
