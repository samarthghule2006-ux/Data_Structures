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
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

bool CheckAllPositive(PNODE Head)
{
    while (Head != NULL)
    {
        if (Head->Data <= 0)
            return false;

        Head = Head->Next;
    }

    return true;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 101);
    InsertFirst(&First, 88);
    InsertFirst(&First, 5);
    InsertFirst(&First, 40);
    InsertFirst(&First, 33);

    if (CheckAllPositive(First))
        printf("All elements are positive\n");
    else
        printf("Not all elements are positive\n");

    return 0;
}
