#include <stdio.h>

int main()
{
    float a, b;
    int choice;
    printf("Enter two numbers: \n");
    scanf("%f %f", &a, &b);
    printf("Enter 1 for addition\n");
    printf("Enter 2 for subtraction\n");
    printf("Enter 3 for multiplication\n");
    printf("Enter 4 for division\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Sum is : %f", a + b);
        break;
    case 2:
        printf("Difference is : %f", a - b);
        break;
    case 3:
        printf("Multiplication is : %f", a * b);
        break;
    case 4:
        printf("The difference is : %f", a / b);
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}
