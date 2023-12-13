#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int m = 3; // Розмірність масиву - кількість рядків
    const int n = 3; // Розмірність масиву - кількість стовбців
    int A[m][n];
    srand(time(0));

    // Заповнення масиву A випадковими числами та виведення його на екран
    std::cout << "Елементи масиву A[" << m << "][" << n << "]:" << std::endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 100;  // Заповнення масиву випадковими числами від 0 до 99
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Обчислення суми елементів головної діагоналі та виведення її на екран
    int sum_main = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sum_main += A[i][j];
            }
        }
    }
    std::cout << "Сума елементів головної діагоналі: " << sum_main << std::endl;

    // Обчислення суми елементів побічної діагоналі та виведення її на екран
    int sum_secondary = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                sum_secondary += A[i][j];
            }
        }
    }
    std::cout << "Сума елементів побічної діагоналі: " << sum_secondary << std::endl;

    return 0;
}