#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i] == target){
            return i;//found the target element, return its index
        }
    }
    return -1;//target element not found, return -1
}
int main(){
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(array)/sizeof(array[0]);
    
    int result = linearSearch(array, size, 5);
    cout << "Element found at index: " << result << endl;
    
    return 0;
}