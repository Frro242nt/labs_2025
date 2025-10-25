#include <iostream>
#include <cmath>

// Checking the first digit of a number
bool check3(int n) {
    n = std::abs(n);
    while (n > 9) n /= 10;
    return n == 3;
}

int main() {
    const int N = 9;  /* The size of the array is 9,
because the option number is 6; 6 + 3 = 9*/

 // Point 1 (Ordering the array in ascending order)
    std::cout << "Enter " << N << " array numbers separated by a space:\n";
    int array[N];

    // Entering an array
    for (int i = 0; i < N; i++) {
        std::cin >> array[i];
    }

 // Checking for a number with the first digit 3
    bool three = false;
    for (int i = 0; i < N; i++) {
        if (check3(array[i])) {
            three = true;
            break;
        }
    }

 // Sort if there is a number with 3
    if (three) {
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int t = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = t;
                }
            }
        }
    }

 // Array output
    std::cout << "Array: ";
    for (int i = 0; i < N; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n\n";

 // Item 2 (Matrix)
    std::cout << "Enter matrix 3x4:\n";
    int mat[3][4];

 // Entering the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> mat[i][j];
        }
    }

 // Searching for the row with the maximum amount (modulo)
    int maxi = 0;
    int maxsum = 0;

    for (int i = 0; i < 3; i++) {
        int sum = 0;
 // Calculating the sum of the row elements
        for (int j = 0; j < 4; j++) {
            sum += mat[i][j];
        }
 // Comparison with the current maximum (modulo)
        if (std::abs(sum) > std::abs(maxsum)) {
            maxsum = sum;
            maxi = i;
        }
    }
 // Replacing the string with 999
    for (int j = 0; j < 4; j++) {
        mat[maxi][j] = 999;
    }
 // Output of the result
    std::cout << "Result:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}