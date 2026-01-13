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

void IncrementAll(PNODE Head)
{
    while (Head != NULL)
    {
        Head->Data++;
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 60);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Before: ");
    Display(First);

    IncrementAll(First);

    printf("After: ");
    Display(First);

    return 0;
}
