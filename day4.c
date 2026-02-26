#include <stdio.h>

int main() {
    
    printf("Счёт от 0 до 4:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    printf("Обратный отсчёт:\n");
    for (int i = 5; i > 0; i--) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    printf("Таблица умножения на 3:\n");
    for (int i = 1; i <= 10; i++) {
        printf("3 * %d = %d\n", i, 3 * i);
    }
    printf("\n");
    
    int password;
    printf("Введи пароль (число 123): ");
    scanf("%d", &password);
    
    while (password != 123) {
        printf("Неверно! Попробуй ещё: ");
        scanf("%d", &password);
    }
    printf("Доступ разрешён! ✅\n");
    
    return 0;
}
