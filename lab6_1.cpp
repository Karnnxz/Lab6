#include <iostream>
using namespace std;

int main() {
    int N;
    int Even_n = 0;
    int Odd_n = 0;

    while (true) {
        cout << "Enter an integer: ";
        cin >> N;

        if (N == 0) {
            break;
        }

        if (N % 2 == 0) {
            Even_n++;
        } else {
            Odd_n++;
        }
    }

    cout << "#Even numbers = " << Even_n << "\n";
    cout << "#Odd numbers = " << Odd_n << "\n";

    return 0;
}