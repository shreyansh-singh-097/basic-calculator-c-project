#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    while (1) {
        printf("\n==============================\n");
        printf("      SIMPLE CALCULATOR\n");
        printf("==============================\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Thank you for using the calculator!\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                printf("Result: %.2f\n", num1 + num2);
                break;
            case 2:
                printf("Result: %.2f\n", num1 - num2);
                break;
            case 3:
                printf("Result: %.2f\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0)
                    printf("Result: %.2f\n", num1 / num2);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            case 5:
                printf("Result: %d\n", (int)num1 % (int)num2);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
