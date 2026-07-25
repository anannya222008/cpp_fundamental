#include <iostream>
#include <vector>
using namespace std;

int element(vector<int>& nums){
    int sz = nums.size();
    for(int i : nums){
        int freq = 0;
        for(int j : nums){
            if(i == j){
                freq = freq+1;
            }
        }
        if(freq > sz/2){
            return i;
        }
    }
}
int main(){
    vector <int> nums = {1,1,2,3,1};
    cout<<element(nums)<<endl;
    return 0;

}