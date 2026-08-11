#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int sz = nums.size();
    int st = 0,end = sz-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(mid == 0 && nums[mid] != nums[mid+1]) return nums[mid];
        if(mid == sz-1 && nums[mid] == nums[mid-1]) return nums[mid];
        if(sz == 1) return nums[0];
        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];
        if(mid%2 == 0){
            if(nums[mid-1] == nums[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            } 
            }else{
            if(nums[mid-1] == nums[mid]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
}
int main(){
    vector <int> nums = {1,1,2,2,3,4,4,5,5};
    cout<<singleNonDuplicate(nums)<<endl;
    return 0;
}