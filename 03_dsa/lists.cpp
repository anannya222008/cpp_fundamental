#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
int main(){
    list <int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    cout<<l.size()<<endl;
    l.insert(l.begin() , 4);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
}