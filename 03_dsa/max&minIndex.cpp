#include <iostream>
#include <climits>
using namespace std;

void swap(int arr[], int size){
   int max = INT_MIN;
   int min = INT_MAX;
   for(int i=0;i<size;i++){
      if(arr[i]>max){
          max = arr[i];
       }
      if(arr[i]<min){
           min = arr[i];
      }
   }
   int maxInd, minInd;
   for(int i=0;i<size;i++){
      if(arr[i] == max){
         maxInd = i;
        }
        if(arr[i] ==min){
          minInd = i;
        }
    }
    swap(arr[maxInd],arr[minInd]);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int array[] = {8,34,33,49,43,003,23};
    int size = sizeof(array)/sizeof(array[0]);
    swap(array,size);
    return 0;
}