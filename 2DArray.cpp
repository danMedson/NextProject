#include <iostream>

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows (up to 3): ";
    std::cin >> rows;
    std::cout << "Enter the number of columns (up to 3): ";
    std::cin >> cols;
    if (rows > 3 || cols > 3) {
        std::cout << "Dimensions must not exceed 3. Exiting program." << std::endl;
        return 1;
    }

    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter value for element (" << i << ", " << j << "): ";
            std::cin >> arr[i][j];
        }
    }

    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
