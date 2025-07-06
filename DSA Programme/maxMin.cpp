#include <iostream>
#include <limits.h> // Include this header for INT_MAX and INT_MIN

int getMin(int num[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (num[i] < min) { // Change '>' to '<'
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    return max;
}

using namespace std;

int main() {
    int size;  // Input the size of array 
    cin >> size;
    int num[100];  // Size of array 
    for (int i = 0; i < size; i++) {
        cin >> num[i]; // Input the array 
    }
    cout << "Maximum element is = " << getMax(num, size) << endl;
    cout << "Minimum element is = " << getMin(num, size) << endl;
    return 0; // Return 0 to indicate successful completion
}
