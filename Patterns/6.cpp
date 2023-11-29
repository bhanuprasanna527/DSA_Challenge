/*
55555
45555
34555
23455
12345
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int i = n, c, j;

    while (i >= 1) {
        c = 1;
        j = i;
        while (c <= n) {
            if (j == 5) {
                cout << 5;
                c = c + 1;
                continue;
            }
            cout << j;
            c = c + 1;
            j = j + 1;
        }

        cout << endl;
        i = i - 1;
    }
}
