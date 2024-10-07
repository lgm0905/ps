#include <iostream>
using namespace std;

int main() {
    int arr[9][9], max = -1, r, c;

    for(int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if(max < arr[i][j]) {
                max = arr[i][j];
                r = i;
                c = j;
            }
        }
    }

    cout << max << endl;
    cout << r+1 << ' ' << c+1 << endl;
}