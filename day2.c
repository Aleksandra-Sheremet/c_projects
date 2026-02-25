#include <stdio.h>  
int main() {       
    
    int a = 5;      
    int b = 3;      
    

    
    int sum = a + b;          
    int product = a * b;     
    int difference = a - b;  
    int division = a / b;    
    
    
    printf("Сумма: %d\n", sum);            
    printf("Произведение: %d\n", product); 
    printf("Разность: %d\n", difference); 
    printf("Целое деление: %d\n", division);
    
    
    a = 10;                 
    printf("Новое значение a: %d\n", a); 
    
 
    
    int x = 7, y = 2;      
    printf("x = %d, y = %d, x * y = %d\n", x, y, x * y);
    
    return 0; 
}