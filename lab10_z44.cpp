#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void find_duplicate_indices(const std::vector<int>& arr) {
    int first_index = -1;
    int second_index = -1;
    int duplicate_value = -1;

    // Поиск дубликатов
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[i] == arr[j]) {
                first_index = i;
                second_index = j;
                duplicate_value = arr[i];
                break; // Найдено два одинаковых элемента, выходим из внутреннего цикла
            }
        }
        if (first_index != -1) break; // Если нашли дубликаты, выходим из внешнего цикла
    }

    // Вывод результатов
    if (first_index != -1 && second_index != -1) {
        std::cout << "Номера одинаковых элементов (" << duplicate_value << "): "
                  << first_index << " и " << second_index << std::endl;
    } else {
        std::cout << "Дубликаты не найдены." << std::endl;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел

    const int N = 10; // Размер массива
    std::vector<int> arr(N);

    // Генерация массива с двумя одинаковыми элементами
    for (int i = 0; i < N - 1; ++i) {
        arr[i] = rand() % 20; // Заполнение случайными числами от 0 до 19
    }

    // Вставка дубликата в массив
    arr[N - 1] = arr[rand() % (N - 1)]; // Копируем один из предыдущих элементов

    // Вывод сгенерированного массива
    std::cout << "Сгенерированный массив: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Поиск индексов дубликатов
    find_duplicate_indices(arr);

    return 0;
}