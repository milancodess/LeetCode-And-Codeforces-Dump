// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>
// int main()
// {

//     char s[] = "3902";
//     int len = strlen(s);
//     char arr[len / 2 + 1];

//     for (int i = 0; i < len; i++)
//     {
//         arr[i] = (s[i] + s[i + 1]) % 10;
//     }

// }
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[] = "3902";
    int len = strlen(s);
    int arr[len - 1];

    for (int i = 0; i < len - 1; i++)
    {
        arr[i] = (s[i] + s[i + 1]) % 10;
    }

    int len2 = sizeof(arr) / sizeof(arr[0]);
    int arr2[len2 - 1];

    if (len2 <= 2 && arr[0] == arr[1])
    {
        return true;
    }
    else
    {
        for (int j = 0; j < len2 - 1; j++)
        {
            arr2[j] = (arr[j] + arr[j + 1]) % 10;
        }

        if (arr2[0] == arr2[1])
        {
            return true;
        }
    }
    return false;
}

#include <stdbool.h>
#include <string.h>

bool hasSameDigits(char *s)
{
    int len = strlen(s);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        arr[i] = s[i] - '0';
    }

    while (len > 2)
    {
        for (int i = 0; i < len - 1; i++)
        {
            arr[i] = (arr[i] + arr[i + 1]) % 10;
        }
        len--;
    }

    return arr[0] == arr[1];
}
