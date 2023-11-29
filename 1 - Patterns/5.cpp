/*
ABCDE
ABCD
ABC
AB
A
*/


#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int i = 1, j;
    char ch = 'A';

    while (i <= n) {
        j = n - i + 1;
        ch = 'A';
        while (j >= 1) {
            cout << ch;
            ch = ch + 1;
            j = j - 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}
