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

void DisplayEvenPosition(PNODE Head)
{
    int pos = 1;

    while (Head != NULL)
    {
        if (pos % 2 == 0)
            printf("%d ", Head->Data);

        pos++;
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

    DisplayEvenPosition(First);

    return 0;
}
