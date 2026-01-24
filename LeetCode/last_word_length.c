#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[] = "luffy is still joyboy";
    int length = strlen(word);

    int lastSpaceIndex = -1;
    for (int i = 0; i < length; i++)
    {
        if (isspace((unsigned char)word[i]))
        {
            lastSpaceIndex = i;
        }
    }

    printf("Last whitespace index: %d\n", lastSpaceIndex);

    return lastSpaceIndex;
}
