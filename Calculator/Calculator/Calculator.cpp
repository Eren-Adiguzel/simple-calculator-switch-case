#include <stdio.h>
#include <math.h>
// Program performing 6 operations using switch case


int addition()
{
    int num1, num2;
    printf("Enter the 1st number:\n"); scanf_s("%d", &num1);
    printf("Enter the 2nd number:\n"); scanf_s("%d", &num2);
    int result = num1 + num2;
    return result;
}

int subtraction()
{
    int num1, num2;
    printf("Enter the 1st number:\n"); scanf_s("%d", &num1);
    printf("Enter the 2nd number:\n"); scanf_s("%d", &num2);
    int result = num1 - num2;
    return result;
}

int multiplication()
{
    int num1, num2;
    printf("Enter the 1st number:\n"); scanf_s("%d", &num1);
    printf("Enter the 2nd number:\n"); scanf_s("%d", &num2);
    int result = num1 * num2;
    return result;
}

double division()
{
    double num1, num2;
    printf("Enter the 1st number:\n"); scanf_s("%f", &num1);
    printf("Enter the 2nd number:\n"); scanf_s("%f", &num2);
    double result = num1 / num2;
    return result;
}

double exponentiation()
{
    double base, exponent;
    printf("Enter the base:\n"); scanf_s("%lf", &base);
    printf("Enter the exponent:\n"); scanf_s("%lf", &exponent);
    double result = pow(base, exponent);
    return result;
}

double root()
{
    double number, degree;
    printf("Enter the number for the root:\n"); scanf_s("%lf", &number);
    printf("Enter the degree:\n"); scanf_s("%lf", &degree);
    double result = pow(number, 1 / degree);
    return result;
}

int main()
{
    int choice, result;
    double doubleResult;
    printf("Which operation would you like to perform?\n");
    printf("1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-Exponentiation\n6-Root\n");
    scanf_s("%d", &choice);
    switch (choice)
    {
    case 1: result = addition(); printf("result = %d\n", result); break;
    case 2: result = subtraction(); printf("result = %d\n", result); break;
    case 3: result = multiplication(); printf("result = %d\n", result); break;
    case 4: doubleResult = division(); printf("result = %lf\n", doubleResult); break;
    case 5: doubleResult = exponentiation(); printf("result = %lf\n", doubleResult); break;
    case 6: doubleResult = root(); printf("result = %lf\n", doubleResult); break;
    default: break;
    }
    return 0;
}
