#include <stdio.h>
int main() {
    int a = 10, b = 5;
    
    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division
    printf("a %% b = %d\n", a % b); // Modulus

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a == b: %d\n", a == b); // Equal to
    printf("a != b: %d\n", a != b); // Not equal to
    printf("a > b: %d\n", a > b);   // Greater than
    printf("a < b: %d\n", a < b);   // Less than
    printf("a >= b: %d\n", a >= b); // Greater than or equal to
    printf("a <= b: %d\n", a <= b); // Less than or equal to

    // Logical Operators
    int x = 1, y = 0;
    printf("\nLogical Operators:\n");
    printf("x && y: %d\n", x && y); // Logical AND
    printf("x || y: %d\n", x || y); // Logical OR
    printf("!x: %d\n", !x);         // Logical NOT

    return 0;
}