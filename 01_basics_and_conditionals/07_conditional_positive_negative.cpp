#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter an integer:";
    cin>>n;
    if(n<0) {
        cout<<"The number is negative."<<endl;
    }
    if(n>0) {
        cout<<"The number is positive."<<endl;
    }
    return 0;
}