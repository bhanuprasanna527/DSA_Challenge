/*
1  2  3  4  5
16          6
15          7
14          8
13 12 11 10 9
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int i, j, k, l;
    i = 1;
    l = 1;

    k = 16;

    while (i <= n) {
        j = 1;
        while (j <= n) {
            if (i == 1) {
                cout << l++ << ' ';
            } else if (i == n) {
                cout << k-- << ' ';
            } else if (j == 1) {
                cout << k-- << ' ';
            } else if (j == n) {
                cout << l++ << ' ';
            } else {
                cout << "  ";
            }
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}