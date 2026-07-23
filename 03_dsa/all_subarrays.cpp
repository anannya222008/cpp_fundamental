#include <iostream>
#include <vector>
using namespace std;

int main(){
    int sz = 5;
    int array[] = {1, 2, 3, 4, 5};

    for(int start = 0;start <sz;start++){
        for(int end = start;end<sz;end++){
            for(int i=start;i<=end;i++){
                cout<<array[i];
            }
            cout<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}