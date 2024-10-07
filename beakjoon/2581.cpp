#include <iostream>
using namespace std;

int main() {
    int m, n, sum = 0, min = 10001;
    bool arr[10001];
    fill_n(arr, 10001, true);
    cin >> m >> n;

    if(m == 1)
        m = 2;

    for (int i = m; i <= n; i++) {
        for (int j = 2; j < i; j++) {
            if(i % j == 0) {
                arr[i] = false;
                break;
            }
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (arr[i] && min > i)
            min = i;
        if(arr[i])
            sum += i;
    }

    if(sum == 0) {
        cout << -1 << endl;
    }
    else {
        cout << sum << endl;
        cout << min << endl;
    }


    return 0;
}