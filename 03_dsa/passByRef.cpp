#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void changeA(int* ptr){
    *ptr = 20;
}
int main(){
    int a = 10;
    changeA(&a);
    cout<<a<<endl;// by default int datatype is pass by value

}