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
    const int n = 4; // Розмірність масиву - кількість стовбців
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

    // Обчислення середнього значення кожного рядка та виведення його на екран
    std::cout << "Середнє значення кожного рядка:" << std::endl;
    for (int i = 0; i < m; i++) {
        double sum = 0;
        for (int j = 0; j < n; j++) {
            sum += A[i][j];
        }
        std::cout << "Рядок " << i << ": " << sum / n << std::endl;
    }

    // Обчислення середнього значення кожного стовбця та виведення його на екран
    std::cout << "Середнє значення кожного стовбця:" << std::endl;
    for (int j = 0; j < n; j++) {
        double sum = 0;
        for (int i = 0; i < m; i++) {
            sum += A[i][j];
        }
        std::cout << "Стовбець " << j << ": " << sum / m << std::endl;
    }

    return 0;
}