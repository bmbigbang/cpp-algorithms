#include "main.h"

int main() {
    int inputKey;
    char inputVal[50];
    string temp;
    vector<tuple<string, int>> m;
    for (int i = 0; i < 4; i++) {
        cout << "Enter a Key-Value pair seperated by space:" << endl;
        scanf("%d%s", &inputKey, inputVal);
        temp = string(inputVal);
        m.emplace_back(tuple<string, int>(temp, inputKey));
    }

    sort(m.begin(), m.end(), compare);

    for (tuple<string, int> elem : m) {
        cout << get<0>(elem) << ' ';
    }
}