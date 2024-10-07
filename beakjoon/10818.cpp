#include <iostream>
using namespace std;

int main() {
    int n, min, max;
    min = 10000000;
    max = -10000000;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(min > a)
            min = a;
        if(max < a)
            max = a;
    }

    printf("%d %d", min, max);
}