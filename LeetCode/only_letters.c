// Example 1:

// Input: s = "ab-cd"
// Output: "dc-ba"
// Example 2:

// Input: s = "a-bC-dEf-ghIj"
// Output: "j-Ih-gfE-dCba"

// Example 3:

// Input: s = "Test1ng-Leet=code-Q!"
// Output: "Qedo1ct-eeLg=ntse-T!"

// ispunct ( to find special symbols)

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char word[] = "Test1ng-Leet=code-Q!";
    int left = 0;
    int right = strlen(word) - 1;

    while (left < right)
    {
        if (!isalpha(word[left]))
        {
            left++;
        }
        else if (!isalpha(word[right]))
        {
            right--;
        }
        else
        {
            char temp = word[left];
            word[left] = word[right];
            word[right] = temp;
            left++;
            right--;
        }
    }
    printf("Word: %s", word);
}