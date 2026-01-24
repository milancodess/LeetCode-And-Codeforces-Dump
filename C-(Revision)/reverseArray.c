#include <stdio.h>
void reverse(int array[], int length);

int main()
{
    int arrays[] = {2, 4, 6, 8, 10, 12};
    int arrays2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse(arrays, 6);
    reverse(arrays2, 9);
    int i = 0;
    while (i < 6)
    {
        printf("arrays[%d]: %d\n", i, arrays[i]);
        i++;
    }
    printf("\n");
    i = 0;
    while (i < 9)
    {
        printf("arrays[%d]: %d\n", i, arrays2[i]);
        i++;
    }
    return 0;
}

void reverse(int array[], int length)
{
    int temp = 0, i = 0;
    while (i < (length / 2))
    {
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
        i++;
    }
}