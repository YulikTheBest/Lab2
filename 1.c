#include <stdio.h>

int main() {
    // Задані значення
    const a = 20;
    const b = -10;
    const c = 0;

    // Обчислення виразу
    double y = (double)(a + b * c) / (2 * a - b - c) + (double)a / (b + 2);

    // Вивід результату
    printf("Задані значення: a = %d, b = %d, c = %d\n", a, b, c);
    printf("Обчислюємо y = (a + b * c) / (2a - b - c) + a / (b + 2)\n");
    printf("Результат: y = %.2f\n", y);

    return 0;
}
