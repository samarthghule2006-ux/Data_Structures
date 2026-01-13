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

int IsPrime(int no)
{
    if (no < 2) return 0;

    for (int i = 2; i <= no / 2; i++)
    {
        if (no % i == 0)
            return 0;
    }
    return 1;
}

void DisplayPrime(PNODE Head)
{
    printf("Prime numbers: ");

    while (Head != NULL)
    {
        if (IsPrime(Head->Data))
            printf("%d ", Head->Data);

        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 6);
    InsertFirst(&First, 45);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 101);

    DisplayPrime(First);
    return 0;
}
