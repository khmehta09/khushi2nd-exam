#include <stdio.h>

int main() {
    int a, b;
    printf("Enter 1st numbers: ");
    scanf("%d",&a);
    printf("Enter 2nd numbers: ");
    scanf("%d",&b);
    
    a = a + b; 
    b = a - b;  
    a = a - b;  
    
    printf("Swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}