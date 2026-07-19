#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;// Declare a vector of integers
    cout<<sizeof(vec)<<endl;// Print the size of the vector object in bytes
    vector <int> vec1 = {1,2,3,4};// Declare a vector of integers with 4 elements initialized to 1,2,3,4
    cout<<sizeof(vec1)<<endl;// Print the size of the vector object in bytes

}