#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort(vector<int>& nums){
    int n = nums.size();
    int mid = 0,high = n-1,low = 0;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    return nums;
    
}
int main(){
    vector<int> nums = {1,0,0,2,1,2,0};
    vector<int> ans = sort(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}