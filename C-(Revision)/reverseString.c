#include <stdio.h>
#include <string.h>
int main()
{
    char word[] = "MILAN";
    int len = strlen(word);
    printf("Length: %d\n", len);

    int i = 0;
    char temp;
    while (i < len / 2)
    {
        temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
        i++;
    }
    printf("Reversed String: %s", word);
}