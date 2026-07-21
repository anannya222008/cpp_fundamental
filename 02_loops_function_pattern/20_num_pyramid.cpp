#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        
        cout<<endl;
    }
}
        