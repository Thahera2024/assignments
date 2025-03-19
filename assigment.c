/* 1. #include <stdio.h>
void main()
{
    int n, i = 0, num, sum = 0;
    printf("enter n numbers:");
    scanf("%d", &n);
    printf("enter %d numbers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
    }
    printf("sum:%d\n", sum);
}
2.
#include <stdio.h>
void main()
{
    int i, n, sum, num;
    printf("enter n numbers:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum of all numbers from 1 to %d is %d", n, sum);
}
3.
#include <stdio.h>
void main()
{
    int i, n, p = 1;
    printf(" enter n numbers");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        p *= i;
    }

    printf("factorial of %d is %d\n:", n, p);
}

4.
#include <stdio.h>
void main()
{
    int n, i;
    printf("enter n number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("1");
        }
        else if (i % 2 == 0)
        {
            printf("-1/%d", i);
        }
        else
        {
            printf("+1/%d", i);
        }
    }
    printf("\n");
}

5.
#include <stdio.h>
void main()
{
    int i, n1, n2, res;
    printf("enter 2 numbers\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    for (i = 1; i <= n2; i++)
    {
        res += n1;
    }
    printf("result %d", res);
}

6.
#include <stdio.h>

void main()
{
    int i = 1, p = 1, n1, n2;

    printf("input:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    // Calculate n1 raised to the power of n2
    while (i <= n2)
    {
        p = p * n1; // Multiply p by n1 in each iteration
        i++;
    }

    printf("output: %d to the power of %d is %d\n", n1, n2, p);
}

1.
#include <stdio.h>

void main()
{
    int i, n, x;
    printf("enter n number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter x value:");
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            printf("the given number %d is ODD\n", x);
        }
        else
        {
            printf("the given number %d is Even\n", x);
        }
    }
}

2.
#include <stdio.h>

void main()
{
    int i, n;
    char ch;
    printf("enter n number:");
    scanf("%d", &n);
    getchar();
    for (i = 0; i <= n; i++)
    {
        printf("enter a character:\n");
        scanf("%c", &ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("the given character %c is vowel\n", ch);
        }
        else
        {
            printf("the given character %c is  not vowel\n", ch);
        }
    }
}

3.
#include <stdio.h>

void main()
{
    int n;

    printf("Enter the number of characters: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        char ch;

        printf("Enter character :");
        scanf("%c", &ch);
        getchar();
        if (ch >= 'A' && ch <= 'Z')
        {
            printf("Character '%c' is a Capital Alphabet.\n", ch);
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            printf("Character '%c' is a Small Alphabet.\n", ch);
        }
        else if (ch >= '0' && ch <= '9')
        {
            printf("Character '%c' is a Numeric Character.\n", ch);
        }
        else
        {
            printf("Character '%c' is a Special Character.\n", ch);
        }
    }
}

4.
#include <stdio.h>

void main()
{
    int n;
    printf("Enter n number: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("At least two numbers are needed for comparison.\n");
        }

    int prev, current;
    printf("Enter number 1: ");
    scanf("%d", &prev);

    for (int i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &current);

        if (current > prev)
        {
            printf("The given number is bigger than the previous number.\n");
        }
        else if (current < prev)
        {
            printf("The given number is smaller than the previous number.\n");
        }
        prev = current;
    }
}

5.
#include <stdio.h>
void main()
{
    int n, i, count = 0, prev, current, flag;

    printf("enter n numbers:");
    scanf("%d", &n);

    printf("enter numbers:");
    scanf("%d", &prev);

    for (i = 1; i < n; i++)
    {
        flag = 0;
        while (!flag)
        {
            printf("enter number %d: ", i + 1);
            scanf("%d", &current);

            if (current > prev)
            {
                count++;
                prev = current;
                flag = 1;
            }
                }
    }
    printf("count is %d\n", count);
}

6.
#include <stdio.h>
void main()
{
    int i, n, s, num;
    printf("enter n numbers:");
    scanf("%d", &n);

    printf("enter %d numbers:\n", n);
    scanf("%d", &s);

    for (i = 1; i < n; i++)
    {

        scanf("%d", &num);
        if (num < s)
        {
            s = num;
        }
    }
    printf("smallest number is %d", s);
}

7.
#include <stdio.h>

void main()
{
    int n, x, i, j;
    printf("Enter n number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter x number: ");
        scanf("%d", &x);
        for (j = 1; j <= 10; j++)
        {
            printf("%d*%d = %d\n", x, j, x * j);
        }
    }
}

8.
#include <stdio.h>

void main()
{
    int n, i, j, topperID = 1;
    float marks, total, percentage, highestPercentage = 0;

    printf("Enter n students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        total = 0;

        printf("Enter %d%s student 6 subjects marks:\n", i,
               (i == 1) ? "st" : (i == 2) ? "nd"
                             : (i == 3)   ? "rd"
                                          : "th");

        for (j = 0; j < 6; j++)
        {
            scanf("%f", &marks);
            total += marks;
        }

        percentage = (total / 600) * 100;
        printf("Student %d percentage is: %.2f%%\n", i, percentage);

        if (percentage > highestPercentage)
        {
            highestPercentage = percentage;
            topperID = i;
        }
    }

    printf("Topper student ID is %d\n", topperID);
}

9.
#include <stdio.h>

void main()
{
    int i, n1, n2;
    printf("input:");
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("output:");
    for (i = n1; i <= n2; i++)
    {
        printf("%d ", i);
    }
}

10.

#include <stdio.h>

void main()
{
    int n, n1, n2, i;
    char ch;
    printf("enter n numbers:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("enter two numbers:");
        scanf("%d", &n1);
        scanf("%d", &n2);
        printf("enter a character(+,-,*,/,%%) :");
        scanf(" %c", &ch);
        switch (ch)
        {
        case '+':
            printf("Result of %d + %d is %d\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("Result of %d - %d is %d\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("Result of %d * %d is %d\n", n1, n2, n1 * n2);
            break;
        case '/':
            if (n2 != 0)
                printf("Result of %d / %d is %.2f\n", n1, n2, (float)n1 / n2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if (n2 != 0)
                printf("Result of %d %% %d is %d\n", n1, n2, n1 % n2);
            else
                printf("Error: Modulo by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
        }
    }
}

11.
#include <stdio.h>

void main()
{
    int i, n, n1, n2;
    printf("inputs:");
    scanf("%d %d", &n1, &n2);
    printf("output:\n");

    printf("odd numbers:");
    for (i = n1; i <= n2; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    printf("\neven numbers:");
    for (i = n1; i <= n2; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}

12.
#include <stdio.h>

void main()
{
    int i, n1, n2;
    printf("inputs:");
    scanf("%d %d", &n1, &n2);
    printf("output:");
    for (i = n2; i >= n1; i--)
    {
        printf("%d ", i);
    }
}
*/