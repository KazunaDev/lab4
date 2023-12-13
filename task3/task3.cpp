#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

// Варіант 13

int main() {
    // Кодування 1251
        SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Оголошення масиву
    int array[9][9];

    // Заповнення масиву випадковими числами
    srand(time(NULL));
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            array[i][j] = rand() % 100;
        }
    }

    // Розбиття масиву на квадрати розміром 3 на 3 елементи
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Обчислення суми елементів квадрата
            int sum = 0;
            for (int k = i * 3; k < i * 3 + 3; k++) {
                for (int l = j * 3; l < j * 3 + 3; l++) {
                    sum += array[k][l];
                }
            }

            // В центрі квадрата поміщаємо суму його елементів
            array[i * 3 + 1][j * 3 + 1] = sum;
        }
    }

    // Виведення результату
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << setw(5) << array[i][j];
        }
        cout << endl;
    }

    return 0;
}

