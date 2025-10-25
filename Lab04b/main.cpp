#include <iostream>
#include <cmath>
using namespace std;

// �������� ������ ����� �����
bool check3(int n) {
    n = std::abs(n);
    while (n > 9) n /= 10;
    return n == 3;
}

int main() {
    const int N = 9;  // ������ ������� = 9, �.�. ����� �������� = 6
    // ����� 1 (�������������� ������� �� �����������)
    std::cout << "Enter" << N << " array numbers:\n";
    int array[N];
    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }
    // �������� �� ����� � ������ ������ 3
    bool three = false;
    for (int i = 0; i < N; i++) {
        if (check3(array[i])) {
            three = true;
            break;
        }
    }
    // ���������� ���� ���� ����� � 3
    if (three) {
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - (i + 1); j++) {
                if (array[j] > array[j + 1]) {
                    int t = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = t;
                }
            }
        }
    }
    // ����� �������
    std::cout << "Array: ";
    for (int i = 0; i < N; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n\n";

    // ����� 2 (�������)
    std::cout << "Enter matrix 3x4:\n";
    int mat[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> mat[i][j];
        }
    }
    // ����� ������ � ������������ ������ (�� ������)
    int maxi = 0;
    int maxsum = 0;

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += mat[i][j];
        }

        if (std::abs(sum) > std::abs(maxsum)) {
            maxsum = sum;
            maxi = i;
        }
    }
    // ������ ������ �� 999
    for (int j = 0; j < 4; j++) {
        mat[maxi][j] = 999;
    }
    // ����� ����������
    std::cout << "Result:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << endl;
    }

    return 0;
}