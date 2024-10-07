#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int ch[256] = {};
    int max = -1;
    char res;

    cin >> str;
    

    for (int i = 0; i < str.size(); i++) {
        ch[tolower(str[i])]++;
    }

    for (int i = 0; i < 256; i++) {
        if(max < ch[i]) {
            max = ch[i];
            res = i;
        }
        else if(max == ch[i])
            res = '?';
    }

    cout << char(toupper(res) << endl;
}