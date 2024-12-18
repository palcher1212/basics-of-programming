import math

def calculate_perimeter(a, h):
    # Вычисляем длину боковой стороны
    b = math.sqrt((a / 2) ** 2 + h ** 2)
    
    # Вычисляем периметр
    perimeter = a + 2 * b
    return perimeter

def main():
    # Ввод данных от пользователя
    a = float(input("Введите основание (a): "))
    h = float(input("Введите высоту (h): "))
    
    # Вычисление периметра
    perimeter = calculate_perimeter(a, h)
    
    # Вывод результата
    print(f"Периметр равнобедренного треугольника: {perimeter:.2f}")

if __name__ == "__main__":
    main()