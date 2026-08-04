#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};//arr is a special variable,is a pointer.
    cout<<arr<<endl;//adress of arr is adress arr[0].
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;//1
    int* ptr2;
    int*ptr1 = ptr2+3;
    cout<<ptr1-ptr2<<endl;

}