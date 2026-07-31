#include <iostream>
#include <algorithm>
using namespace std;

int profit(int arr[],int sz){
    int maxProfit = 0;
    int bestBuy = arr[0];
    for(int i=1;i<sz;i++){
        maxProfit = max(maxProfit,arr[i]-bestBuy);
        if(arr[i]<bestBuy){
            bestBuy = arr[i];
        }
    }
    return maxProfit;
}
int main(){
    int arr[] = {5,3,6,7,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< profit(arr,size)<<endl;
    return 0;
}