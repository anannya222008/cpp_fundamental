#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int sum = 0;
    for(int i = 1;i<=n;i = i +2){
        sum = sum + i;

    }
    cout<<"Sum of odd numbers from 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}