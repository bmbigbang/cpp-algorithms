#include "main.h"

int main() {
    int inputKey;
    char inputVal[50];

    for (int i = 40; i < 127; i++) {
        cout << hex << i << "-" << oct << i << "-" << (char) i << endl;
    }

}