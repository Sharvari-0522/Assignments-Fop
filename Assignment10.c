#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;
    long long fact = 1;

    printf("--- Simple Calculator ---\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power (x^y)\n6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2f\n", num1 * num2);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        case 5:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2f\n", pow(num1, num2));
            break;
        case 6:
            printf("Enter an integer: ");
            scanf("%lf", &num1);
            for(int i = 1; i <= (int)num1; ++i) fact *= i;
            printf("Result: %lld\n", fact);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}




