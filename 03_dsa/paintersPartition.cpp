#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

bool isValid(vector<int>& nums,int m,int maxTime){
    int n = nums.size();
    int painter = 1,currentTime = 0;
    for(int i=0;i<n;i++){
        if(nums[i]>maxTime) return false;
        if(currentTime + nums[i] <= maxTime){
            currentTime += nums[i];
        }else{
            painter++;
            currentTime = nums[i];
        }
    }
    if(painter > m){
        return false;
    }else{
        return true;
    }
}


int minTime(vector<int>& nums,int m){
    int n = nums.size();
    if(m>n) return -1;
    int Time = 0;
    int ans = 0;
    for(int i:nums){
        Time += i;
    }
    int st = 0,end = Time;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(isValid(nums,m,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {10,10,10,10};
    cout<<minTime(nums,2)<<endl;
}