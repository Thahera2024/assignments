#include <stdio.h>

float calculateSimpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float p, r, t;
    printf("enter principle,rate,time\n");
    scanf("%f %f %f", &p, &r, &t);
    float interest = calculateSimpleInterest(p, r, t);
    float amount = p + interest;

    printf("simple intrest is %f\n", interest);
    printf("totalAmount:%f\n", amount);

    return 0;
}


#include <stdio.h>
#include <math.h>

// Function to calculate a^n
double power(double a, int n)
{
    return pow(a, n);
}

int main()
{
    double a;
    int n;

    
    printf("Enter the base (a): ");
    scanf("%lf", &a);

    printf("Enter the exponent (n): ");
    scanf("%d", &n);


    double result = power(a, n);

    
    printf("\n%.2lf to the power of %d is: %.2lf\n", a, n, result);

    return 0;


#include <stdio.h>


int multiply(int a, int b) {
    int result = 0;
    int negative = (a < 0) ^ (b < 0); 

    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;

    for (int i = 0; i < b; i++) {
        result += a;
    }

    return negative ? -result : result;
}

int main() {
    int a, b;

    // Taking user input
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Calculating product
    int product = multiply(a, b);

    // Displaying result
    printf("\nProduct of %d and %d is: %d\n", a, b, product);

    return 0;
}

}



#include <stdio.h>


int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a / b; 
}

int main() {
    int a, b;

   
    printf("Enter dividend (a): ");
    scanf("%d", &a);

    printf("Enter divisor (b): ");
    scanf("%d", &b);

    
    int quotient = divide(a, b);

   
    printf("\nQuotient of %d divided by %d is: %d\n", a, b, quotient);

    return 0;
}


#include <stdio.h>

// Function to calculate remainder
int getRemainder(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a % b; // Using modulus operator to get remainder
}

int main() {
    int a, b;

    // Taking user input
    printf("Enter dividend (a): ");
    scanf("%d", &a);

    printf("Enter divisor (b): ");
    scanf("%d", &b);

    // Calculating remainder
    int remainder = getRemainder(a, b);

    // Displaying result
    printf("\nRemainder of %d divided by %d is: %d\n", a, b, remainder);

    return 0;
}


#include <stdio.h>


void printMultiplicationTable(int num) {
    printf("Multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int num;

    // Taking user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Printing multiplication table
    printMultiplicationTable(num);

    return 0;
}


#include <stdio.h>

// Function to check if a number is prime
int IsPrime(int num) {
    if (num <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // num is divisible by i, so it's not prime
        }
    }

    return 1;  // num is prime
}

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is prime and print the result
    if (IsPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}


#include <stdio.h>
#include <ctype.h>  // For isalnum function

// Function to check if a character is alphanumeric
int fun_alpha_num(char c) {
    if (isalnum(c)) {
        return 1;  // Character is alphanumeric
    }
    return 0;  // Character is not alphanumeric
}

int main() {
    char c;

    // Input a character from user
    printf("Enter a character: ");
    scanf("%c", &c);

    // Check if the character is alphanumeric and print the result
    if (fun_alpha_num(c)) {
        printf("The character '%c' is alphanumeric.\n", c);
    } else {
        printf("The character '%c' is not alphanumeric.\n", c);
    }

    return 0;
}



#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int sub(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int mul(int a, int b) {
    return a * b;
}

// Function to find the quotient of two numbers
int quotient(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error! Division by zero.\n");
        return 0;  // Return 0 if division by zero
    }
}

// Function to find the remainder of two numbers
int remainder(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Error! Division by zero.\n");
        return 0;  // Return 0 if division by zero
    }
}

int main() {
    int num1, num2, result, choice;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Display menu
    printf("Choose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division for Quotient (/)\n");
    printf("5. Division for Remainder (%%)\n");
    printf("Enter your choice (1/2/3/4/5): ");
    scanf("%d", &choice);

   
    switch(choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case 2:
            result = sub(num1, num2);
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case 3:
            result = mul(num1, num2);
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case 4:
            result = quotient(num1, num2);
            if (num2 != 0) {
                printf("Result: %d / %d = %d\n", num1, num2, result);
            }
            break;
        case 5:
            result = remainder(num1, num2);
            if (num2 != 0) {
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}



#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;  // Leap year
    }
    return 0;  
}

int main() {
    int year;

    
    printf("Enter a year: ");
    scanf("%d", &year);

    
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}


#include <stdio.h>


int getDaysInMonth(int month, int year) {
    // Check for invalid month input
    if (month < 1 || month > 12) {
        return -1;  // Invalid month
    }

    
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        return 29;  // February in a leap year has 29 days
    }

    
    return daysInMonth[month - 1];
}

int main() {
    int month, year, days;

    
    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    
    days = getDaysInMonth(month, year);

    
    if (days == -1) {
        printf("Invalid month input.\n");
    } else {
        printf("Number of days in month %d of year %d is: %d\n", month, year, days);
    }

    return 0;
}


#include <stdio.h>


void swap(int a, int b) {
    // Swapping the values using a temporary variable
    int temp = a;
    a = b;
    b = temp;

   
    printf("After swapping: a = %d, b = %d\n", a, b);
}

int main() {
    int num1, num2;


    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    
    swap(num1, num2);

    return 0;
}




*/
