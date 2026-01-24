#include <stdio.h>
int main()
{

    char word[] = "Laptop";

    int i = 0;
    while (word[i] != '\0')
    {
        printf("%c\n", word[i]);
        i++;
    }
    printf("Length: %d", i);
    return 0;
}