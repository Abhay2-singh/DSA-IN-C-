#include<iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    // Corrected the condition to start < end
    while (start < end) { // Error: should be start < end
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void PrintArray(int arr[], int n) {
    // Corrected the loop condition to i < n
    for (int i = 0; i < n; i++) { // Error: should be i < n
        cout << arr[i] << " " << endl;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);
    PrintArray(arr, 5);
    return 0;
}
