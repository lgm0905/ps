#include <iostream>
using namespace std;

int main() {
    string str; int cnt = 0;
    bool isChar = false;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ')
            isChar = false;
        if(str[i] != ' ' && isChar)
            isChar = true;
        if(str[i] != ' ' && !isChar) {
            isChar = true;
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}