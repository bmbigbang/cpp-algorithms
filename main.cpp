#include "main.h"

int main() {
    int i = 8;
    int cube = i*i*i;
    do {
        cout << cube << endl;
        i++;
        cube = i*i*i;
    } while (cube <= 10000);
}