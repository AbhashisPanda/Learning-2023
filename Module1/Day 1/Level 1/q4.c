#include <stdio.h>

void main() {
    float num1, num2, result;
    char op;

    printf("Enter Number1: ");
    scanf("%f", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &op);

    printf("Enter Number2: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator");
            return 1;
    }

    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

}