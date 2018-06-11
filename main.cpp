#include "main.h"

int main() {
    int inputKey;
    char inputVal[50];
    string s;
    int sSize;
    bool isPalindrome = true;
    vector<string> p;

    for (int i = 0; i < 4; i++) {
        cout << "Enter a word:" << endl;
        scanf("%s", inputVal);
        s = string(inputVal);
        sSize = s.length();
        for (int j = 0; j < (sSize + 1 / 2); j++) {
            if (s[j] != s[sSize - j - 1]) {
                isPalindrome = false;
            }
        }

        if (isPalindrome) {
            p.push_back(s);
        }
    }

    for (auto i : p) {
        cout << i << endl;
    }
}