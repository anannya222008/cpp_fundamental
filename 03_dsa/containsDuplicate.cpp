#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    int sz = nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<sz-1;i++){
        if(nums[i] == nums[i+1]){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int>nums = {1,2,2,3,4}; 
    bool ans = containsDuplicate(nums);
    cout<<ans<<endl;
}

