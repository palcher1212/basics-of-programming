import random

def sum_until_zero(arr):
    total_sum = 0
    
    for num in arr:
        if num == 0:
            break  # Прерываем цикл при встрече первого нуля
        total_sum += num  # Добавляем элемент к сумме
    
    return total_sum

def main():
    # Ввод размера массива
    n = int(input("Введите количество элементов в массиве: "))
    
    # Генерация случайного массива
    arr = [random.randint(-10, 10) for _ in range(n)]  # Генерация чисел от -10 до 10

    print(f"Сгенерированный массив: {arr}")

    # Проверка наличия хотя бы одного отрицательного элемента
    if any(num < 0 for num in arr):
        result = sum_until_zero(arr)
        print(f"Сумма элементов массива до первого нуля: {result}")
    else:
        print("В массиве нет отрицательных элементов.")

if __name__ == "__main__":
    main()