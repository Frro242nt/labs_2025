#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

// Перегруженная функция для двух чисел
int f(int a, int b) {
    cout << "A function is used to combine two numbers." << endl;
    int t = b;
    int mult = 1;
    while (t > 0) {
        mult *= 10;
        t /= 10;
    }
    return a * mult + b;
}
// Перегруженная функция для одного числа - противоположное число
int f(int a) {
    cout << "The function of the opposite number is used" << endl;
    return -a;
}
int main() {
    int choice;
    int a, b, c;

    cout << "Select point (1 or 2): ";
    cin >> choice;

    if (choice == 1 || choice == 2) {
        cout << "Enter three integers: ";
        cin >> a >> b >> c;

        int count = (a != 0) + (b != 0) + (c != 0);
        cout << "Detected " << count << " non-zero numbers" << endl;

        if (count == 2) {

            int first = 0, second = 0;

            if (a != 0 && b != 0) {
                first = a;
                second = b;
            }
            else if (a != 0 && c != 0) {
                first = a;
                second = c;
            }
            else if (b != 0 && c != 0) {
                first = b;
                second = c;
            }

            cout << "Result: " << f(first, second) << endl;
        }
        else if (count == 1) {
            int num = 0;
            if (a != 0) {
                num = a;
            }
            else if (b != 0) {
                num = b;
            }
            else {
                num = c;
            }
            cout << "Result: " << f(num) << endl;
        }
        else {
            cout << "There are no numbers to process" << endl;
        }
    }
    else {
        cout << "Wrong choice!" << endl;
    }

    return 0;
}
