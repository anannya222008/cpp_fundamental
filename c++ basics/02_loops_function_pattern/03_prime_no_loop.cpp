#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    for(int i = 2;i<n;i++){
        if(n%i == 0){
            cout <<n<<" is not a prime number."<<endl;
        }else{
            cout<<n<<"is a prime number."<<endl;
        }
break;
    }
return 0;
}