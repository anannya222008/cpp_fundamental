#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int num = 0;
    for(int i=0;i<n;i++){
        num++;
        for(int j=0;j<=i;j++){
            cout<<num<<"";
            
        }
        cout<<endl;
    }
   

}
        