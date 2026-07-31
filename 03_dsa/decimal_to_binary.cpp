#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> binary(int n) {
    vector <int> ans;
    
    while(n > 0){
        int num = n%2;
        ans.push_back(num);
        n /= 2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector <int> ans = binary(8);
    for(int i : ans){
        cout<<i;
    }
    cout<<endl;
}