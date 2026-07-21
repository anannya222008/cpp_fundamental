#include <iostream>
using namespace std;
int convert(int deciNum){
    int ans = 0,power = 1;
    while(deciNum > 0){
        int rem = deciNum%2;
        deciNum = deciNum/2;
        ans += (rem * power);
        power *=10;

    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a decimal number : ";
    cin>>n;
    cout<<convert(n)<<endl;
    return 0;
}
    