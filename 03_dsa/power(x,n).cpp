#include <iostream>
using namespace std;

double pow(double x, int n) {
    long long N = n;
    if(N<0){
        x = 1.0/x;
        N = -N;
    }
    double ans = 1.0;
    while(N>0){
        if(N%2 == 1){
            ans *= x;
            N--;          
        }  
        x *= x;
        N /= 2;
    }        
    return ans;   
}
int main(){
    cout<<pow(2,-2)<<endl;
    return 0;
}