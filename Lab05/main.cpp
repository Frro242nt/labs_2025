#include <iostream>
#include <cmath>
#include <limits>

using namespace std;
//Point 1
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
// Перегруженная функция для одного числа
int f(int a) {
    cout << "The function of the opposite number is used" << endl;
    return -a;
}
//Point 2
void print() {
    cout << "Point 2: \n";

    cout << "Data types:\n";

    cout << "int (sides):" << endl;
    cout << "Size: " << sizeof(int) * 8 << " bit" << endl;
    cout << "Min: " << numeric_limits<int>::lowest() << endl;
    cout << "Max: " << numeric_limits<int>::max() << endl;

    cout << "double (square):" << endl;
    cout << "Size: " << sizeof(double) * 8 << " bit" << endl;
    cout << "Min: " << scientific << numeric_limits<double>::lowest() << endl;
    cout << "Max: " << scientific << numeric_limits<double>::max() << endl;
    cout << fixed;
}

void calc() {
    int a, b, c;

    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        cout << "Error" << endl;
        return;
    }

    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Square: " << area << " (Type: double)" << endl;
}

int main() {
    int choice;
    int a, b, c;
    cout << "Point 1: \n";
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
    print();
    calc();
    return 0;
}
