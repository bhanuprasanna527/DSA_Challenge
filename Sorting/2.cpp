// Insertion Sort Algorithm
#include <iostream>
using namespace std;

void Insertion_Sort (int a[], int n) {
    for (int i = 1; i < n; i++) {
        int t = a[i];
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (t < a[j]) {
                a[j + 1] = a[j];
            } else {
                break;
            }
        }
        a[j + 1] = t;
    }
}

int main () {
    int a[] = {5, 4, 3, 2, 1};
    
    Insertion_Sort(a, 5);

    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}