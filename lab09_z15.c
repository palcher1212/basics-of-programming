#include <stdio.h>

int max_product_partition(int n) {
    if (n <= 1) return 0; // Нельзя разбить число <= 1
    
    int product = 1;
    
    // Разбиваем число
    while (n > 4) {
        product *= 3; // Используем тройки
        n -= 3;
    }
    
    product *= n; // Добавляем оставшуюся часть (2, 3 или 4)
    
    return product;
}

int main() {
    int N;

    // Ввод числа от пользователя
    printf("Введите натуральное число N (> 1): ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("Число должно быть больше 1.\n");
        return 1;
    }

    int result = max_product_partition(N);
    
    printf("Максимальное произведение для %d: %d\n", N, result);
    
    return 0;
}