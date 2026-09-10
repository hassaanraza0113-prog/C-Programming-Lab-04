#include <stdio.h>

int main()
{
    float num1, num2, num3;

    printf("Enter any three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3)
    {
        printf("All three numbers are equal to %.2f\n", num1);
    }
    else if (num1 >= num2 && num1 >= num3)
    {
        if (num1 == num2)
        {
            printf("The greatest value is %.2f (First and second numbers are equal).\n", num1);
        }
        else if (num1 == num3)
        {
            printf("The greatest value is %.2f (First and third numbers are equal).\n", num1);
        }
        else
        {
            printf("The greatest number is %.2f\n", num1);
        }
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        if (num2 == num3)
        {
            printf("The greatest value is %.2f (Second and third numbers are equal).\n", num2);
        }
        else
        {
            printf("The greatest number is %.2f\n", num2);
        }
    }
    else
    {
        printf("The greatest number is %.2f\n", num3);
    }

    return 0;
}
