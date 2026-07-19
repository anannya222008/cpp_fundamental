#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;// Declare a vector of integers
    cout<<sizeof(vec)<<endl;// Print the size of the vector object in bytes
    vector <int> vec1 = {1,2,3,4};// Declare a vector of integers with 4 elements initialized to 1,2,3,4
    cout<<sizeof(vec1)<<endl;// Print the size of the vector object in bytes
    cout<<vec1[0]<<endl;// Print the first element of the vector
    vector <int> vec2(5,10);// Declare a vector of integers with 5 elements initialized to 10
    cout<<sizeof(vec2)<<endl;// Print the size of the vector object in bytes
    for(int i = 0; i < vec2.size(); i++){// Loop through the vector and print each element
        cout<<vec2[i]<<" ";
    }
    cout<<endl;
    for(int i : vec1){// Loop through the vector using range-based for loop and print each element
        cout<<i<<" ";
    }
    cout<<endl;
    vector <char> vec3 = {'a','b','c','d'};
    for(int i : vec3){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}