#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort(vector<int>& nums){
    int n= nums.size();
    for(int i=1;i<n;i++){
        int prev = i-1,curr = nums[i];
        while(prev >=0 && nums[prev]>curr){
            nums[prev+1] = nums[prev];
            prev--;
        }
        nums[prev+1] = curr;
    }
    return nums;
}
int main(){
    vector<int> nums = {4,1,5,3,2};
    vector<int> ans = sort(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}