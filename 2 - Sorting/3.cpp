// Bubble Sort Algorithm
#include <iostream>
using namespace std;

void Bubble_Sort (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

int main () {
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    int a[n];

    cout << "Enter the array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    Bubble_Sort(a, n);

    cout << "\nThe array elements are: ";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}