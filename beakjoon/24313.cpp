#include <iostream>
using namespace std;

int main() {
    int a1, a0, c, n0,res = 1;
    cin >> a1 >> a0 >> c >> n0;

    for (int i = n0; i < 10000; i++) {
        if ((a1 - c) * i + a0 > 0)
        {
            res = 0;
            break;
        }
    }

    cout << res << endl;

    return 0;
}