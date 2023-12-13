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

    // Знаходження мінімального та максимального елементів масиву
    int minElement = *std::min_element(A, A + 10);
    int maxElement = *std::max_element(A, A + 10);

    std::cout << "Мінімальний елемент: " << minElement << std::endl;
    std::cout << "Максимальний елемент: " << maxElement << std::endl;

    return 0;
}
