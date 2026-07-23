#include <iostream>
#include <vector>
using namespace std;

int max(int arr[],int sz){
    int max_sum = INT_MIN;
    for(int st = 0;st<sz;st++){
        int sum = 0;
        for(int end = st;end<sz;end++){
            sum += arr[end];
            max_sum = max(max_sum,sum);

        }
    }
    return max_sum;
}
int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int sz = sizeof(arr)/sizeof(arr[0]);
    cout<<max(arr,sz);
    return 0;
}