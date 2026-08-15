#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> min(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        int minNumIdx = i;
        for(int j=i+1;j<n;j++){
            if(nums[j] <nums[minNumIdx]){
                minNumIdx = j;
            }

        }
        swap(nums[minNumIdx],nums[i]);
    }
    return nums;
}
int main(){
    vector<int> nums = {3,5,2,1,4};
    vector<int> ans = min(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}