// Example 1:

// Input: word = "abcdefd", ch = "d"
// Output: "dcbaefd"
// Explanation: The first occurrence of "d" is at index 3.
// Reverse the part of word from 0 to 3 (inclusive), the resulting string is "dcbaefd".
// Example 2:

// Input: word = "xyxzxe", ch = "z"
// Output: "zxyxxe"
// Explanation: The first and only occurrence of "z" is at index 3.
// Reverse the part of word from 0 to 3 (inclusive), the resulting string is "zxyxxe".
// Example 3:

// Input: word = "abcd", ch = "z"
// Output: "abcd"
// Explanation: "z" does not exist in word.
// You should not do any reverse operation, the resulting string is "abcd".

#include <stdio.h>
#include <string.h>
int main()
{
    char word[] = "xyxzxe";
    char ch[] = "z";
    int len = strlen(word);
    int index = 0;

    for (int i = 0; i < len; i++)
    {
        if (word[i] == ch)
        {
            index = i;
            break;
        }
    }

    if (index == 0)
    {
        return word;
    }
    for (int i = 0; i < (index / 2 + 1); i++)
    {
        char temp = word[i];
        word[i] = word[index - i];
        word[index - i] = temp;
    }

    return word;
}
