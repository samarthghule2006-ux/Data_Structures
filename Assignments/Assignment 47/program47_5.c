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

int CountPrime(PNODE Head)
{
    int count = 0;

    while (Head != NULL)
    {
        if (IsPrime(Head->Data))
            count++;

        Head = Head->Next;
    }
    return count;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 6);
    InsertFirst(&First, 45);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 101);

    printf("Total prime numbers: %d", CountPrime(First));
    return 0;
}
