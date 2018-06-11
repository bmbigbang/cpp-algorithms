#include "main.h"

int main() {
    int inputKey;
    char inputVal[50];
    string s;
    string t;
    int sSize;
    bool isPalindrome = true;
    vector<string> p;

    for (int i = 0; i < 4; i++) {
        cout << "Enter a word:" << endl;
        scanf("%s", inputVal);
        s = string(inputVal);
        t = s;
        transform(t.begin(), t.end(), t.begin(), ::tolower);

        sSize = s.length();
        for (int j = 0; j < (sSize + 1 / 2); j++) {
            if (t[j] != t[sSize - j - 1]) {
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