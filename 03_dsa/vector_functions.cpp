#include <iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vec = {1,2,3,4};
cout<<vec.size()<<endl;// Print the size of the vector
vec.push_back(5);// Add an element to the end of the vector
for(int i : vec){
    cout<< i<<" ";
}
 cout<<endl;
cout<<vec.size()<<endl;
vec.pop_back();// Remove the last element from the vector
for(int i : vec){
    cout<< i<<" ";
}
 cout<<endl;
 cout<<vec.front()<<endl;// Access the first element of the vector
 cout<<vec.back()<<endl;// Access the last element of the vector
cout<<vec.at(1)<<endl;// Access the element at index 1 of the vector
}