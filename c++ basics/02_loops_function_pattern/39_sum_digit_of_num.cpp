#include <iostream>
using namespace std;

    int sum(int num){
        int digsum = 0;

        while(num>0){
           int lastdig = num%10;
           num/= 10;
           digsum += lastdig;
        }
        return digsum;
    }

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"sum of digits of "<<n<<"="<<sum(n)<<endl;
    return 0;

}
