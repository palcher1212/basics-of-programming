#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    //ввод
    printf("Введите размер массива (N): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Размер массива должен быть не менее 2.\n");
        return 1;
    }

    int arr[n];

    //генератор случайных чисел
    srand(time(NULL));

    //массив с случайными числами
    printf("Сгенерированный массив: ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Генерация чисел от 0 до 99
        printf("%d ", arr[i]);
    }
    printf("\n");

    int minDiff = abs(arr[1] - arr[0]);
    int index1 = 0, index2 = 1;

    //поиск ближайших элементов
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            index1 = i;
            index2 = i + 1;
        }
    }

    //вывод
    printf("Индексы двух ближайших элементов: %d и %d\n", index1, index2);
    printf("Значения элементов: %d и %d\n", arr[index1], arr[index2]);

    return 0;
}
