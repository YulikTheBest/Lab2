#include <stdio.h>
#include <math.h>

int main() {
    // Оголошення змінних
    int x, y, z;

    // Ввід значень з клавіатури
    printf("Введіть значення x: ");
    scanf("%d", &x);

    printf("Введіть значення y: ");
    scanf("%d", &y);

    printf("Введіть значення z: ");
    scanf("%d", &z);

    // Обчислення частин виразу:
    // верхня частина дробу: x + (y / z)
    double top = x + (double)y / z;

    // нижня частина дробу: x - (1 / (1 + x^2))
    double bottom = x - (1.0 / (1 + pow(x, 2)));

    // результат: (1 + z) * (top / bottom)
    double t = (1 + z) * (top / bottom);

    // Вивід результату
    printf("Обчислюємо t = (1 + z) * (x + y/z) / (x - 1 / (1 + x^2))\n");
    printf("Результат: t = %.2f\n", t);

    return 0;
}
