#include <iostream>
using namespace std;
int sum(int n){
    int s=0;
    for(int i=0;i<=n;i++){
        s=s+i;
    }
    return s;
}
int main(){
    int k;
    cout<<"Enter a number: ";
    cin>>k;
    cout<<sum(k)<<endl;
    return 0;
}