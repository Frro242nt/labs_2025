#include <iostream>
#include <cmath>

using namespace std;

// Функция для склеивания двух чисел
int connect(int a, int b) {
    cout << "use the 2-number contraction function" << endl;

    int t = b;
    int mult = 1;

    // Считаем сколько разрядов у второго числа
    while (t > 0) {
        mult *= 10;
        t /= 10;
    }

    return a * mult + b;
}

// Функция для нахождения противоположного числа
int opposite(int a) {
    cout << "use the opposite number function" << endl;
    return -a;
}

int main() {
    int a, b, c;

        cout << "Enter three integers: ";
        cin >> a >> b >> c;

        int count = (a != 0) + (b != 0) + (c != 0);
        cout << "Discovered " << count << " non-zero numbers" << endl;

        if (count == 2) {
            // Находим два ненулевых числа
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

            cout << "Result: " << connect(first, second) << endl;
        }
        else if (count == 1) {
            // Находим ненулевое число
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

            cout << "Result: " << opposite(num) << endl;
        }
        else {
            cout << "No numbers to process" << endl;
        }
    return 0;
}
