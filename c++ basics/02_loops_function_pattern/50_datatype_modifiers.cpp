#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<< sizeof(a)<<endl; // 4
    long long b;
    cout<<"Enter a number: ";
    cin>>b;
    cout<< sizeof(b)<<endl; // 8
}