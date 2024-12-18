import random
#ввод
m = int(input("Введите количество строк (M): "))
n = int(input("Введите количество столбцов (N): "))
#проверка положительности
if m < 1 or n < 1:
    print("Размеры матрицы должны быть положительными.")
else:
    #генерация и ввывод матрицы
    matrix = [[random.randint(0, 100) for _ in range(n)] for _ in range(m)]
    print("Сгенерированная матрица:")
    for row in matrix:
        print(row)

    for i in range(m):
        row_max = max(matrix[i])
        col_index = matrix[i].index(row_max)
        if all(row_max <= matrix[k][col_index] for k in range(m)):
            print("Найденный элемент:", row_max)
            break
    else:
        print("0")
