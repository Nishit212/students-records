#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    while (1) {
        printf("Enter an operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);
        
        if (operator == 'q') break;  // Exit the loop if 'q' is entered

        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
            case '+':
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                else
                    printf("Error! Division by zero.\n");
                break;
            default:
                printf("Error! Operator is not correct\n");
        }
    }

    return 0;
}
