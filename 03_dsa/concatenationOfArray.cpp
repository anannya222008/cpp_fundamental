#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr(vector<int> &nums){
    vector<int> ans = nums;
    ans.reserve(nums.size()*2);
    ans.insert(ans.end(),nums.begin(),nums.end());
    return ans;
}
int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> ans = arr(nums);
    for(int i:ans){
        cout<<i<<" ";

    }
    cout<<endl;
}