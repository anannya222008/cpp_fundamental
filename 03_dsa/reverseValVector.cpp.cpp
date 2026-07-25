#include <iostream>
#include <vector>
using namespace std;

void reverse(vector <int> & nums){
    int size = nums.size();
    int i = 0;
    int j = size - 1;
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    for(int k : nums){
        cout<< k <<" ";
    }
    cout<<endl;
}
int main(){
    vector <int> nums= {1,2,3,4,5,6};
    reverse(nums);
}
