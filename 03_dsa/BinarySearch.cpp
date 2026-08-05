#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarySearch(vector<int>&nums,int tgt){
    int sz = nums.size();
    int st = 0,end = sz-1;
    while(st <= end){
        int mid = (st + end)/2;
        if(tgt>nums[mid]){
            st = mid + 1;
        }else if(tgt<nums[mid]){
            end = mid - 1;
        }else{
            return mid;
        }
    }
    return -1;

}
int main(){
    vector<int>nums = {1,-3,4,7,8};
    int tgt = 7;
    cout<<"index = "<<binarySearch(nums,tgt)<<endl;
    return 0;
}