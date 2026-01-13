#include <stdio.h>
#include <stdlib.h>

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

int CountGreater(PNODE Head, int X)
{
    int count = 0;

    while (Head != NULL)
    {
        if (Head->Data > X)
            count++;

        Head = Head->Next;
    }
    return count;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 21);
    InsertFirst(&First, 40);
    InsertFirst(&First, 50);
    InsertFirst(&First, 21);
    InsertFirst(&First, 30);
    InsertFirst(&First, 21);
    InsertFirst(&First, 10);

    printf("Count greater than 30: %d\n", CountGreater(First, 30));
    return 0;
}
