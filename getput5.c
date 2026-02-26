#include <stdio.h>

int main() {
    
    printf("Введи несколько символов: ");
    
   
    int a = getchar();  
    int b = getchar();   
    int c = getchar();   
    int d = getchar();    
    int e = getchar();       
   
    printf("Ты ввёл: ");
    
   
    putchar(a);  
    putchar(b);  
    putchar(c);  
    putchar(d);   
    putchar(e);      
     
    putchar('\n');
    
    return 0;
}
