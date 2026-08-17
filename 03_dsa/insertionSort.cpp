#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort(vector<int>& nums){
    for(int i=0;i<nums.size()-1;i++){
        for(int j=0;j<nums.size()-i-1;j++){
            int previous = j,current = j+1;
            if(nums[previous] > nums[current]){
                swap(nums[previous],nums[current]);
            }
        }
    }
    return nums;
}
int main(){
    vector<int> nums = {2,3,5,1,4};
    vector<int> ans = sort(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}