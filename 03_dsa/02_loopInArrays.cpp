#include <iostream>
using namespace std;
int main(){
    int siz;
    cout<<"Enter the size of array: ";
    cin>>siz;
    int size = siz;
    int marks[size];
    for(int i = 0;i<size;i++){
        cout<<"Enter the marks of student "<<i+1<<": ";
        cin>>marks[i];
    }
    for(int i = 0;i<size;i++){
        cout<<"Marks of student "<<i+1<<": "<<marks[i]<<endl;
    }
    return 0;
}