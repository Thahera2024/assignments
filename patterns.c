1.
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

#include <stdio.h>

int main()
{
    int rows = 5, i, j; 
   
    for (int i = 0; i < rows; i++)
    {
        
        if (i == 1)
        {
            for (j = 0; j < 1; j++)
            {
                printf(" ");
            }
        }
        else if (i >= 2)
        {
            for (j = 0; j < 4; j++)
            {
                printf(" ");
            }
        }

        // Print stars
        for (int j = 0; j < rows - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int i, j, row = 5;
    for (i = 0; i < row; i++)
    {
        if (i <= 2)
        {
            for (j = 0; j < 4; j++)
            {
                printf(" ");
            }
        }
        else if (i == 3)
        {
            for (j = 0; j < 1; j++)
            {
                printf(" ");
            }
        }
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

#include <stdio.h>

int main()
{
    int i, j, row = 5;
    for (i = 0; i < row; i++)
    {
        if (i <= 2)
        {
            for (j = 0; j < 3; j++)
            {
                printf("   ");
            }
        }
        else if (i == 3)
        {
            for (j = 0; j < 1; j++)
            {
                printf("   ");
            }
        }
        for (j = 0; j <= i; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}

#include <stdio.h>

int main()
{
    int i, j, row = 5;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

#include <stdio.h>

int main()
{
    int i, j, row = 5;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

#include <stdio.h>

int main()
{
    int i, j, row = 5;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }
}

#include <stdio.h>

int main()
{
    int i, j, row = 5;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", row - i);
        }
        printf("\n");
    }
}

#include <stdio.h>

void main()
{
    int i, j, row = 5;
    for (i = 1; i <= row; i++)
    {
        for (j = row; j >= row - i + 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

#include <stdio.h>

void main()
{
    int i, j, row = 5, num = 1;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i == 2 && j == 2) || (i == 3 && j == 2) || (i == 4 && (j == 2 || j == 4)))
            {
                printf(" %d ", num);
            }
            else
            {
                printf("%d ", num);
            }
            num++;
        }

        printf("\n");
    }
}

#include <stdio.h>

void main()
{
    int i = 1, row = 5;
    char star[6] = "";

    while (i <= row)
    {
        star[i - 1] = '*';
        printf("%s\n", star);
        i++;
    }
}

#include <stdio.h>

void main()
{
    int i, j, row = 9;
    for (i = 0; i <= (row - 1) / 2; i++)
    {
        if (i < 3)
        {
            for (j = 1; j < 5; j++)
            {
                printf(" ");
            }
        }
        else if (i == 3)
        {
            for (j = 1; j < 2; j++)
            {
                printf(" ");
            }
        }
        for (j = 1; j <= 2 * i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = row; i >= (row - 1) / 2; i--)
    {
        if (i < 9)
        {
            for (j = 1; j < 5; j++)
            {
                printf(" ");
            }
        }
        else if (i == row)
        {
            for (j = 1; j < 2; j++)
            {
                printf(" ");
            }
        }
        for (j = 1; j <= 2 * i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
*/
