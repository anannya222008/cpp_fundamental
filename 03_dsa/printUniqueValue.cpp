#include <iostream>
using namespace std;
void printUniqueValue(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}
int main() {
    int arr[10] = {1, 2, 3, 2, 4, 5, 1, 6, 7, 8};
    printUniqueValue(arr, 10);
    return 0;
}