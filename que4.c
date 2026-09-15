#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    int num1, num2;

    printf("MENU-DRIVEN CALCULATOR\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 6)
    {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
    }

    switch (choice)
    {
        case 1:
            printf("Result = %d", num1 + num2);
            break;

        case 2:
            printf("Result = %d", num1 - num2);
            break;

        case 3:
            printf("Result = %d", num1 * num2);
            break;

        case 4:
            if (num2 != 0)
                printf("Result = %.2f", (float)num1 / num2);
            else
                printf("Division by zero is not allowed.");
            break;

        case 5:
            if (num2 != 0)
                printf("Result = %d", num1 % num2);
            else
                printf("Modulus by zero is not allowed.");
            break;

        case 6:
            printf("Result = %.2f", pow(num1, num2));
            break;

        case 7:
            printf("Exiting calculator.");
            break;

        default:
            printf("Invalid choice.");
    }

    return 0;
}