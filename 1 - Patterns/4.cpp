/*
12344321
123**321
12****21
1******1
 */


#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int i = 1, j;

    while (i <= n) {
        j = 1;
        while (j <= n - i + 1) {
            cout << j;
            j = j + 1;
        }

        j = 1;
        while (j <= 2 * (i - 1)) {
            cout << '*';
            j = j + 1;
        }

        j = n - i + 1;
        while (j >= 1) {
            cout << j;
            j = j - 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}
