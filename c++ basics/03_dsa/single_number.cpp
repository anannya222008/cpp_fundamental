#include <iostream>
#include <vector>
using namespace std;

int uniqueNum(int arr[],int size){
    for(int i = 0;i <size ;i++){
        bool isunique = true;
        for(int j = 0;j<size;j++){
            while(i!=j && arr[i] == arr[j]){
                isunique = false;
                break;
            }
        }
        if(isunique ==  true){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    uniqueNum(arr,size);
}