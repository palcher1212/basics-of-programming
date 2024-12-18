import random

def find_max_local_minimum(arr):
    n = len(arr)
    if n < 3:
        return None  #проверка реальности условия

    local_minimums = []
    for i in range(1, n - 1):  #проверяем элементы
        if arr[i] < arr[i - 1] and arr[i] < arr[i + 1]:
            local_minimums.append(arr[i])

    if not local_minimums:
        return None  #минимумов нет

    return max(local_minimums)  #максимальный из локальных минимумов

#ввод
n = int(input("Введите размер массива (N): "))

if n < 1:
    print("Размер массива должен быть положительным числом.")
else:
    #генерация массива 
    arr = [random.randint(0, 100) for _ in range(n)]
    print("Сгенерированный массив:", arr)

    #поиск и ввывод ответа
    result = find_max_local_minimum(arr)
    if result is not None:
        print("Максимальный из локальных минимумов:", result)
    else:
        print("Локальных минимумов не найдено.")
