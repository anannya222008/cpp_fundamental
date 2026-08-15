#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> bubbleSort(vector<int>& nums){
    int n = nums.size();
    bool isSwap = false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){   //O(n^2)
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){// no values were swapped,its already sorted.
            return;
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