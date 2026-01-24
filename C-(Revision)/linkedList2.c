#include <stdio.h>
#include <stdlib.h>

struct Node
{
    // int data;
    // struct Node *next;
    int result;
    int multiplier;
    struct Node *next;
};

int main()
{
    int num = 3;
    // int i, n;
    // struct Node *head = NULL;
    struct Node *head = NULL, *temp = NULL, *newNode;

    // n = 10;
    // i = 1;
    // struct node *temp = (struct Node *)malloc(typeof(struct Node));
    // while (i <= n)
    // {
    //     temp =
    // }
    // Create multiplication table (1 to 10)
    for (int i = 1; i <= 10; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->multiplier = i;
        newNode->result = num * i;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Traverse and print table
    temp = head;
    while (temp != NULL)
    {
        printf("%d * %d = %d\n", num, temp->multiplier, temp->result);
        temp = temp->next;
    }

    return 0;
}
//     return 0;
// }
