#include "main.h"

int main() {
    char input[50];

    vector<string> p;

    cout << "Enter words to sort:" << endl;
    for (int i = 0; i < 6; i++) {
        scanf(" %[a-zA-Z0-9 ]", input);
        p.emplace_back(string(input));
    }

    sort(p.begin(), p.end(), compare);

    for (auto i : p) {
        cout << i << endl;
    }
}