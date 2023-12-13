#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    // Кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A[10];
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        A[i] = rand() % 100;  // Заповнення масиву випадковими числами від 0 до 99
    }

    // Сортування за зростанням та виведення відсортованого масиву
    std::sort(A, A + 10);
    std::cout << "Елементи масиву, відсортовані за зростанням: ";
    for (int i = 0; i < 10; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    // Сортування за спаданням та виведення відсортованого масиву
    std::sort(A, A + 10, std::greater<int>());
    std::cout << "Елементи масиву, відсортовані за спаданням: ";
    for (int i = 0; i < 10; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
