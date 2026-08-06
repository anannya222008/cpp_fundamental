#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>& nums,int tgt){
    int sz = nums.size();
    int st = 0,end = sz-1;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(nums[mid] == tgt){
            return mid;
        }
        if(nums[st] <= nums[mid]){
            if(nums[st] <= tgt && tgt<=nums[mid]){
                end = mid -1;
            }else{
                st = mid+1;
            }
        }else{
            if(nums[mid] <= tgt && tgt <= nums[end]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {5,6,0,1,2,3,4};
    cout<<binarySearch(nums,5)<<endl;
    return 0;
}
