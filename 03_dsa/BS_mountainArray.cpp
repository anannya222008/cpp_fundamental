#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>& nums){
    int sz = nums.size();
    int st = 1;//peak value for mountain array cannot be in 1st index.
    int end = sz-2;//peak cant be last index.
    while(st <= end){
        int mid = st + (end - st)/2;
        if(nums[mid-1]<nums[mid]&& nums[mid]>nums[mid+1]) {
            return mid;
        }
        if(nums[mid-1]<nums[mid]){
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {2,3,5,4,1};
    cout<<binarySearch(nums)<<endl;;
    return 0;
}