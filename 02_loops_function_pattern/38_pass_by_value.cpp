#include <iostream>
using namespace std;
void changex(int x){
    x=x*2;
    cout<<"x = "<< x <<endl;
}
int main(){
   int x=5;
    changex(x);
cout<<"x = "<<x<<endl;
return 0;
}