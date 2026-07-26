#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int element(vector<int>& nums){
    int sz = nums.size();
    sort(nums.begin(),nums.end());
    int freq = 1,ans = nums[0];
    for(int i=1;i<sz;i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > sz/2){
            return ans;
        }
    }
    return ans;
}
int main(){
    vector <int> nums = {3,2,3,4,4,4,4};
    cout<<element(nums)<<endl;
    return 0;

}