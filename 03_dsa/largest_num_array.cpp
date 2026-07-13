#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {3, 2, 7, -23, -3};
    int size = sizeof(nums) / sizeof(nums[0]);
    int largest = INT_MIN;
    int index = -1;

    for (int i = 0; i < size; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
            index = i;
        }
    }

    cout << "The largest number is: " << largest << " at index: " << index << endl;
    return 0;
}