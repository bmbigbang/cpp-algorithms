#include "main.h"

int main() {
    int inputInt;
    cout << "Enter an integer:" << endl;
    scanf("%d", &inputInt);
    if (inputInt == 1) {
        cout << "TRUE" << endl;
    } else if ((inputInt > 500) || (inputInt < 1)) {
        cout << "OUT OF RANGE" << endl;
    } else {
        if (isPrime(inputInt)) {
            cout << "TRUE" << endl;
        } else {
            cout << "FALSE" << endl;
        }
    }

}