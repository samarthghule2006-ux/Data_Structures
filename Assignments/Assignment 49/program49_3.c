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

void DisplayDivByThree(PNODE Head)
{
    printf("Divisible by 3: ");

    while (Head != NULL)
    {
        if (Head->Data % 3 == 0)
            printf("%d ", Head->Data);

        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 101);
    InsertFirst(&First, 88);
    InsertFirst(&First, 5);
    InsertFirst(&First, 40);
    InsertFirst(&First, 33);
    InsertFirst(&First, 25);
    InsertFirst(&First, 10);

    DisplayDivByThree(First);

    return 0;
}
