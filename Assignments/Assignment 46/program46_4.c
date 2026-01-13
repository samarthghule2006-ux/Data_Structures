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

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("%d ", Head->Data);
        Head = Head->Next;
    }
    printf("\n");
}

void ReplaceNegative(PNODE Head)
{
    while (Head != NULL)
    {
        if (Head->Data < 0)
            Head->Data = 0;

        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 15);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, -5);
    InsertFirst(&First, 20);
    InsertFirst(&First, -10);

    printf("Before: ");
    Display(First);

    ReplaceNegative(First);

    printf("After: ");
    Display(First);

    return 0;
}
