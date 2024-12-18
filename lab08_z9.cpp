#include <iostream>
#include <vector> // Подключаем библиотеку для работы с векторами

using namespace std;

int main() {
    int M, N;

    // Ввод размеров матрицы
    cout << "Введите количество строк (M): ";
    cin >> M;
    cout << "Введите количество столбцов (N): ";
    cin >> N;

    // Создание матрицы
    vector<vector<int>> matrix(M, vector<int>(N));

    // Ввод элементов матрицы
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Вычисление среднего арифметического для строк с нечетным номером
    cout << "Среднее арифметическое для строк с нечетным номером:" << endl;
    for (int i = 0; i < M; ++i) {
        if (i % 2 == 1) { // Нечетные номера строк (1, 3, ...)
            double sum = 0;
            for (int j = 0; j < N; ++j) {
                sum += matrix[i][j];
            }
            double average = sum / N;
            cout << "Среднее арифметическое для строки " << i + 1 << ": " << average << endl;
        }
    }

    return 0;
}