#include <iostream>
using namespace std;
int main(){
    int marks[5] = {100, 90, 80, 70, 60};// size of array is 5
    double price[] = {10.5, 20.5, 30.5, 40.5, 50.5};// size of array is 5
    cout<<marks[0]<<endl;// prints 100
    cout<<price[0]<<endl;// prints 10.5
    marks[0] = 200;// changes the value of marks[0] to 200
    cout<<marks[0]<<endl;// prints 200
    return 0;
}