
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

struct Node
{
    int value;
    struct Node* previous = { NULL };
};

struct Node* createNode(int value, struct Node* previous)
{

    struct Node* node =
        (struct Node*)malloc(sizeof(struct Node));
    node->value = value;

    if (previous)
    {
        node->previous = previous;
    }


    return node;
}

int main()
{
    struct Node* zero = createNode(0, NULL);
    struct Node* first = createNode(1958, zero);
    struct Node* second = createNode(1962, first);
    struct Node* third = createNode(1970, second);
    struct Node* fourth = createNode(1994, third);
    struct Node* fifth = createNode(2002, fourth);

    struct Node* iterator = fifth;

    printf("\n");

    while (iterator)
    {
        printf(" %d, ", iterator->value);
        if (iterator->previous->value == 0)break;
        iterator = iterator->previous;
    }
    printf("\n");
}

