#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double pow(double x,int n){
    double ans = 1;
    long biNum = n;
    if(n == 0) return 1;
    if(x == 0) return 0;
    if(x == 1) return 1;
    if(n<0){
        x = 1/x;
        biNum= -n;
    }
    while(biNum > 0){
        if(biNum % 2 == 1){
            ans *= x;
        }
        x *= x;
        biNum /= 2;
        

    }
    return ans;
}
int main(){
    cout<<pow(2,-2)<<endl;
}
    