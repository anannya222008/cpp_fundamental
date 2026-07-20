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

}