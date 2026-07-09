#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int num = 1;
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=n-i;j>0;j--){
            cout<<num;
            num++;
        }
        for(int j=n-i;j>1;j--){
            cout<<j-1;
        }
        cout<<endl;
    }
}