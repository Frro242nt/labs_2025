#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

//Пункт 2

void print() {
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
    print();
    calc();
    return 0;
}