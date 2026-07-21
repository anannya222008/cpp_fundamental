#include <iostream>
using namespace std;
void swap(int arr[],int size){
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    // Find the indices of max and min elements
    int maxIndex = -1, minIndex = -1;
    for(int i = 0; i < size; i++){
        if(arr[i] == max){
            maxIndex = i;
        }
        if(arr[i] == min){
            minIndex = i;
        }
    }
    // Swap the max and min elements
    swap(arr[maxIndex], arr[minIndex]);

}

int main(){
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    swap(array,size);
    for(int i = 0; i < size; i++){
        cout<< array[i]<<" ";

    }
    cout<<endl;
    return 0;
}