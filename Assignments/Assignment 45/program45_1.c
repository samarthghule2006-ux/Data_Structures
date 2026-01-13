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

void DisplayOdd(PNODE Head)
{
    printf("Odd elements: ");
    while (Head != NULL)
    {
        if (Head->Data % 2 != 0)
            printf("%d ", Head->Data);

        Head = Head->Next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 71);
    InsertFirst(&First, 40);
    InsertFirst(&First, 60);
    InsertFirst(&First, 51);
    InsertFirst(&First, 30);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    DisplayOdd(First);
    return 0;
}
