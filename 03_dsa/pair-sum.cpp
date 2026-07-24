#include <iostream>
#include <vector>
using namespace std;
vector <int> pairSum(vector <int>&nums,int target){
    int sum =0;
    vector <int> pair;
    int sz = nums.size();
    for(int i=0;i<sz;i++){
        for(int j=i+1;j<sz;j++){
            if(nums[i] + nums[j] == target){
                pair.push_back(nums[i]);
                pair.push_back(nums[j]);
                return pair;

             }
        }
    }
}
int main(){
    vector<int>nums = {1,2,-3,8,5};
    int target = 7;
    vector<int>ans = pairSum(nums,target);
    cout<<"The num whose sum gives "<<target<<" are : "<<ans[0]<<", "<<ans[1];
    
    cout<<endl;
    return 0;
 }