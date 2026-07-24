#include <iostream>
#include <vector>
using namespace std;

int main(){
    int sz = 5;
    int array[] = {1, 2, 3, 4, 5};
    for(int st = 0; st <sz;st++){
        for(int end = st;end<sz;end++){
            for(int i=st;i<=end;i++){
                cout<<array[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}