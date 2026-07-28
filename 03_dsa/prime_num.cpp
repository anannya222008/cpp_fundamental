#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<" n = ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            cout<<n<<" is not a prime num."<<endl;
            break;
        }
    }
    return 0;
}