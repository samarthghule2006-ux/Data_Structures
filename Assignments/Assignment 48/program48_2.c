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

void ReplaceOdd(PPNODE Head)
{
    PNODE temp = *Head;

    while (temp != NULL)
    {
        if (temp->Data % 2 != 0)
            temp->Data = 1;

        temp = temp->Next;
    }
}

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("%d ", Head->Data);
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 55);
    InsertFirst(&First, 40);
    InsertFirst(&First, 33);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    ReplaceOdd(&First);
    Display(First);

    return 0;
}
