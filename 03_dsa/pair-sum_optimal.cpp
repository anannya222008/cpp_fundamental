#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector <int>& nums,int target){
    int sz = nums.size();
    vector <int> ans;
    int i = 0,j = sz-1; //two pointers
    while(i < j){
        int sum = nums[i] + nums[j];
        if(sum > target){
            j--;
        }else if(sum < target){
            i++;
        }else{
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);  
            return ans;
        }
    }
    return ans;
}
int main(){
    vector <int> nums = {3,2,4};
    int target = 7;
    vector <int> vec = pairSum(nums,target);
    cout<<"The nums whose sum gives " <<target<<" are : ";
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}