#include <iostream>
using namespace std;
int product(int arr[],int size){
    int product = 1;
    for(int i=0;i<size;i++){
        product *= arr[i];;
    }
    return product;
}
int main(){
    int array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<"Product of array elements is: "<<product(array,size);
    return 0;
}
