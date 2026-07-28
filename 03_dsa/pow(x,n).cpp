#include <iostream>
using namespace std;

double pow(double x,int n){
    long long N = n;
    if(n<0){
        x = 1.0/x;
        N = -N;
    }
    double ans = 1.0;
    for(int i=0;i<N;i++){
        ans *= x;
    }
    return ans;
}
int main(){
    cout<<pow(2,-2)<<endl;
    return 0;
}