#include <stdio.h>

int main() {
    int a, b;
    
    printf("Введи два числа через пробел: ");
    scanf("%d %d", &a, &b);
    
    printf("Сумма: %d\n", a + b);
    printf("Произведение: %d\n", a * b);

    return 0;
}