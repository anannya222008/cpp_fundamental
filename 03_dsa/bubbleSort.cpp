#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> bubbleSort(vector<int>& nums){
    int n = nums.size();
    bool isSwap = false;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i;j++){   //O(n^2)
            if(nums[j-1]>nums[j]){
                swap(nums[j-1],nums[j]);
                isSwap = true;
            }
        }
        if(!isSwap){// no values were swapped,its already sorted.
            return nums;
        }
    }
    return nums;
}
int main(){
    vector<int> nums = {2,4,3,1,5};
    vector<int> ans = bubbleSort(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}