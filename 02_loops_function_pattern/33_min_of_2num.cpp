#include <iostream>
using namespace std;
int min(int a,int b){
    if(a<b){
        return a;
    
    }else{
        return b;
    }
}
int main(){
    cout<<"min = "<<min(7,8)<<endl;
    return 0;
}