#include "main.h"

int main() {
    int rollNumber;
    int score;

    vector<tuple<int, int>> p;

    cout << "Enter student records:" << endl;
    for (int i = 0; i < 10; i++) {
        scanf(" %d-%d", &rollNumber, &score);
        p.emplace_back(tuple<int, int>(rollNumber, score));
    }

    sort(p.begin(), p.end(), compare);
    set<int> rollNo;
    bool is_in;

    for (auto i : p) {
        is_in = rollNo.find(get<0>(i)) != rollNo.end();
        if (!is_in) {
            cout << get<0>(i) << " " << get<1>(i) << endl;
            rollNo.insert(get<0>(i));
        }
    }
}