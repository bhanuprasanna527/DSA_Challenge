/**
 * This CPP file contains Sorting Techniques.
 * 1. Insertion Sort
 * 2. Selection Sort
 * 3. Bubble Sort
 * 4. Quick Sort
 * 5. Merge Sort
 * 
 * I am confident know on how to code and use them.
 * 
 * Recursion is one thing which used to be very difficult to me.
 * But doing C++ course on Coding Ninjas changed the way I think about Recursion and altogether about DSA.
 * 
 * This is my file containing Sorting Techniques.
 */


#include <iostream>
using namespace std;

int partition (int a[], int l, int r) {
    int pivotElement = l;

    int minEleCount = 0;

    for (int i = l+1; i <= r; i++) {
        if (a[pivotElement] >= a[i]) {
            minEleCount++;
        }
    }

    swap(a[l], a[l+minEleCount]);
    pivotElement = pivotElement + minEleCount;

    int i = l, j = r;

    while (i < pivotElement && j > pivotElement) {
        while (a[i] <= a[pivotElement]) i++;

        while (a[j] > a[pivotElement]) j--;

        if (i < pivotElement && j > pivotElement) {
            swap(a[i++], a[j--]);
        }
    }

    return pivotElement;
}

void quickSort (int a[], int l, int r) {
    if (l >= r) {
        return;
    }

    int pivot = partition(a, l, r);
    quickSort(a, l, pivot-1);
    quickSort(a, pivot+1, r);
}

void merge (int a[], int l, int r, int mid) {
    int b[r-l+1];
    int i = l, j = mid + 1, k = 0;

    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) {
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }

    while (i <= mid) {
        b[k++] = a[i++];
    }

    while (j <= r) {
        b[k++] = a[j++];
    }

    for (i = l, k = 0; i <= r; i++) {
        a[i] = b[k++];
    }
}

void mergeSort (int a[], int l, int r) {
    if (l >= r) {
        return;
    }

    int mid = (l + r) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid+1,r);
    merge(a, l, r, mid);
}

void selectionSort (int a[], int size) {
    for (int i = 0; i < size; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap(a[min], a[i]);
    }
}

void insertionSort (int a[], int size) {
    for (int i = 1; i < size; i++) {
        int j = i - 1, key = a[i];
        while (j >= 0 && key < a[j]) {
            a[j + 1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

void bubbleSort (int a[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
}

void print (int a[], int size, string s) {
    cout << "Using **" << s << "** the array is the following:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << "\n\n";
}

void arrayInsertion (int a[], int size = 1000000) {
    for (int i = 0; i < size; i++) {
        a[i] = size - i;
    }
}

int main () {
    int a[1000000];

    cout << endl;

    arrayInsertion(a);
    bubbleSort(a, 1000000);
    print(a, 1000000, "Bubble Sort");

    arrayInsertion(a);
    insertionSort(a, 1000000);
    print(a, 1000000, "Insertion Sort");

    arrayInsertion(a);
    selectionSort(a, 1000000);
    print(a, 1000000, "Selection Sort");

    arrayInsertion(a);
    mergeSort(a, 0, 999999);
    print(a, 1000000, "Merge Sort");

    arrayInsertion(a);
    quickSort(a, 0, 999999);
    print(a, 1000000, "Quick Sort");

    return 0;
}
