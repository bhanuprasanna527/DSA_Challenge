/*
1     1
 2   2
  3 3
   4
  3 3
 2   2
1     1
*/


#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int i, j, sp;
    i = 1;
    while (i <= n) {
        sp = i - 1;
        while (sp >= 1) {
            cout << ' ';
            sp = sp - 1;
        }
        cout << i;
        sp = 2 * n - 2 * i - 1;
        while (sp >= 1) {
            cout << ' ';
            sp = sp - 1;
        }
        if (i != n) {
            cout << i;
        }

        cout << endl;
        i = i + 1;
    }

    i = n - 1;
    while (i >= 1) {
        sp = i - 1;
        while (sp >= 1) {
            cout << ' ';
            sp = sp - 1;
        }
        cout << i;

        sp = 2 * n - 2 * i - 1;
        while (sp >= 1) {
            cout << ' ';
            sp = sp - 1;
        }
        cout << i;

        cout << endl;
        i = i - 1;
    }

    return 0;
}