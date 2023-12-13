#include <iostream>
#include <Windows.h>

using namespace std;

// Варіант 13

int main() {
    // Кодування 1251
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Оголошення масиву
    int array[200];

    // Заповнення масиву випадковими значеннями
    srand(time(NULL));
    for (int i = 0; i < 200; i++) {
        array[i] = rand() % 201 - 100;
    }

    // Пошук безперервної ділянки з 10 елементів, яка має найбільше середнє значення
    int max_mean = -1000000;
    int max_begin = -1;
    int max_end = -1;
    for (int i = 0; i < 200 - 9; i++) {
        int sum = 0;
        for (int j = i; j < i + 10; j++) {
            sum += array[j];
        }
        int mean = sum / 10;
        if (mean > max_mean) {
            max_mean = mean;
            max_begin = i;
            max_end = i + 9;
        }
    }

    // Виведення результату
    cout << "Безперервна ділянка з 10 елементів, яка має найбільше середнє значення: ";
    for (int i = max_begin; i <= max_end; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

