#include <iostream>
using namespace std;
int a = 4;
int num(){
    int b = 10;
    return 0;
}
int main(){
    cout<<a<<endl; // 4
    cout<<" "<<endl; // error: 'b' was not declared in this scope
}

