#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> product(vector <int>&nums){
    int sz = nums.size();
    vector <int>ans(sz,1);
    vector <int>prefix(sz,1);
    vector <int>suffix(sz,1);
    for(int i=1;i<sz;i++){
        prefix[i] = prefix[i-1]*nums[i-1];
    }
    for(int i=2;i>=0;i--){
        suffix[i] = suffix[i+1]*nums[i+1];
    }
    for(int i=0;i<sz;i++){
        ans[i] = prefix[i]*suffix[i];
    }
    return ans;
}
int main(){
    vector <int>nums = {1,2,3,4};
    vector <int>ans = product(nums);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}