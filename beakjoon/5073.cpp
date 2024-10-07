#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    while (1)
    {
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0)
            break;

        int m = max(max(a, b), c);

        if (m >= a+b+c-m) cout << "Invalid" << endl;
        else if (a == b && b == c) cout << "Equilateral" << endl;
        else if(a == b || b == c || c == a) cout << "Isosceles" << endl;
        else cout << "Scalene" << endl;
    }
}