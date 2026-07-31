#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
        
    int sz = height.size();
    int left = 0,right = sz-1;
    int maxWater = 0;
    while(left<right){
        int ht = min(height[left],height[right]);
        int wd = right-left;
        int current = ht * wd;
        maxWater = max(maxWater,current);
        if(height[left]<height[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxWater;
}
int main(){
    vector <int>ht = {2,4,3,7,6,5};
    cout<<maxArea(ht)<<endl;
    return 0;
}