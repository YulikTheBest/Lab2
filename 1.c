#include <stdio.h>

int main() {
    // Задані значення
    int a = 20;
    int b = -10;
    int c = 0;

    // Обчислення виразу
    double y = (double)(a + b * c) / (2 * a - b - c) + (double)a / (b + 2);

    // Вивід результату
    printf("Задані значення: a = %d, b = %d, c = %d\n", a, b, c);
    printf("Обчислюємо y = (a + b * c) / (2a - b - c) + a / (b + 2)\n");
    printf("Результат: y = %.2f\n", y);

    return 0;
}
