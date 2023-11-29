/*
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int i = 1, j, sp, ch = n;

    while (i <= n / 2 + 1) {
        sp = n / 2 - i + 1;
        while (sp >= 1) {
            cout << ' ';
            sp = sp - 1;
        }

        j = 1;
        while (j <= 2 * i - 1) {
            cout << j;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }

    n = n - i + 1;
    i = 1;

    while (i <= n) {
        sp = i;
        while (sp >= 1) {
            cout << ' ';
            sp = sp - 1;
        }

        j = 1;
        while (j <= ch - 2 * i) {
            cout << j;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }
}
