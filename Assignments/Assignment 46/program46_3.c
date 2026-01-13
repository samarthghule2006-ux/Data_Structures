#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;

bool IsEmpty(PNODE Head)
{
    if (Head == NULL)
        return true;
    else
        return false;
}

int main()
{
    PNODE First = NULL;

    if (IsEmpty(First))
        printf("List is empty\n");
    else
        printf("List is not empty\n");

    return 0;
}
