#include <stdio.h>

int searchElement(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    int index = searchElement(arr, size, target);

    if (index != -1)
    {
        printf("Element found at index %d\n", index);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}


#include <stdio.h>

void reverseArray(int arr[], int size)
{
    printf("Reversed array: ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, size);

    return 0;
}

#include <stdio.h>

void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        
        start++;
        end--;
    }
}

int main()
{
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

void printBinary(int num)
{
    int binary[32]; 
    int index = 0;

    if (num == 0)
    {
        printf("Binary: 0\n");
        return;
    }

    // Convert to binary
    while (num > 0)
    {
        binary[index++] = num % 2;
        num /= 2;
    }

    // Print binary in reverse order
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printBinary(num);

    return 0;
}

#include <stdio.h>

void swapAndReverseArrays(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
       
        int temp = arr1[i];
        arr1[i] = arr2[size - 1 - i];
        arr2[size - 1 - i] = temp;
    }
}

int main()
{
    int size;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    printf("Enter %d elements for array1: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for array2: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr2[i]);
    }

    swapAndReverseArrays(arr1, arr2, size);

    printf("\nSwapped and reversed arrays:\n");
    printf("array1: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\narray2: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

float calculateAverage(int marks[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += marks[i];
    }
    return (float)sum / size;
}

int main()
{
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    int marks[size];

    printf("Enter the marks of %d students: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &marks[i]);
    }

    float average = calculateAverage(marks, size);
    printf("The average marks of the class is: %.2f\n", average);

    return 0;
}

#include <stdio.h>

void convertNegativesToPositive(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = -arr[i]; 
        }
    }
}

int main()
{
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    convertNegativesToPositive(arr, size);

    printf("Modified array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int areArraysEqual(int arr1[], int arr2[], int size1, int size2) {
    if (size1 != size2) {
        return 0; 
    }

    for (int i = 0; i < size1; i++) {
        if (arr1[i] != arr2[i]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int size1, size2;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements: ", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d elements: ", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    if (areArraysEqual(arr1, arr2, size1, size2)) {
        printf("Arrays are equal.\n");
    } else {
        printf("Arrays are not equal.\n");
    }

    return 0;
}


#include <stdio.h>

int countMaxOccurrences(int arr[], int size)
{
    int max = arr[0], count = 0;

    // Find the maximum value in the array
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Count occurrences of the maximum value
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == max)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = countMaxOccurrences(arr, size);
    printf("The maximum number appears %d times in the array.\n", count);

    return 0;
}




*/
