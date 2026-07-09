#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int rem;
    rem = num%2;
    if(rem == 0){
        cout<<"The number is even."<<endl;
    }else{
        cout<<"The number is odd."<<endl;
        return 0;
    }
    
}
