#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool isValid(vector<int>& nums, int k,int maxSum){
    int subarray = 1,currentSum = 0,n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]>maxSum) return false;
        if(currentSum + nums[i] <= maxSum){
            currentSum += nums[i];
        }else{
            subarray++;
            currentSum = nums[i];
        }
    }
    if(subarray > k){
        return false;
    }else{
        return true;
    }
}

    int splitArray(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = 0;
    if(k>n) return -1;
    for(int i:nums){
    sum +=i;
    }
    int st = 0,end = sum;
    int ans = 0;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(isValid(nums,k,mid)){
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    return ans;
        
}
int main(){
    vector<int> nums = {1,2,3,4,5};
    cout<<splitArray(nums,2)<<endl;

}