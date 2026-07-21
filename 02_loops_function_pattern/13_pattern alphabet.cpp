#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    char alp = 'A';
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout<<alp<<" ";
            alp++;
        }
        cout<<endl;
    }  

}
        