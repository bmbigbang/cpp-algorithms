#include "main.h"

int main() {
    char inputVal[50];
    string s;
    string item1 = "a";
    string item2 = "is";
    int score1, score2;
    vector<int> p;
    size_t found;

    for (int i = 0; i < 4; i++) {
        score1 = -1;
        score2 = -1;
        cout << "Enter a word:" << endl;
        scanf(" %49[0-9a-zA-Z ]", inputVal);
        s = string(inputVal);

        found = s.find(item1);
        if (found != string::npos) {
            cout << found << endl;
            score1 = (int) found;
        }

        found = s.find(item2);
        if (found != string::npos) {
            cout << found << endl;
            score2 = (int) found;
        }

        p.emplace_back(score1 + score2);
    }

    for (auto i : p) {
        cout << i << endl;
    }
}