// Selection Sort Algorithm
#include <iostream>
using namespace std;

void Selection_Sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        int t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
}

int main () {
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the array Elements: ";

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    Selection_Sort(a, n);

    cout << "\nAfter sorting the array is: ";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}