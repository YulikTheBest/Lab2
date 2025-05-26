#include <stdio.h>
int main() {
    int a, b;
    
    printf("Введіть перше ціле число: ");
    scanf("%d", &a);
    
    printf("Введіть друге ціле число: ");
    scanf("%d", &b);
    
    int podvoena_suma = 2 * (a + b);
    int dilennia = a / b;  // Ціла частина ділення
    int riznytsia = a - b;

    printf("Подвоєна сума чисел: %d\n", podvoena_suma);
    printf("Ціла частина від ділення першого на друге: %d\n", dilennia);
    printf("Різниця першого і другого числа: %d\n", riznytsia);

    return 0;
}
