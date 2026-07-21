#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int alp = 'A';
    for(int i=0;i<n;i++){
       
        for(int j=0;j<=i;j++){
            cout<<(char)alp<<" ";
        }
        alp++;
        cout<<endl;
    }


}
        