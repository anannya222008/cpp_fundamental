#include <iostream>
using namespace std;
int main(){
    int nums[] = {3,29,7,-23,-3};
    int size = sizeof(nums)/sizeof(nums[0]);
    int largest = -INT_MAX;
    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest = nums[i];
        }
    }
    cout<<"The largest number is : "<<largest<<endl;
    return 0;
}