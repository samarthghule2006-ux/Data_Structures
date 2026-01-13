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

int Difference(PNODE Head)
{
    int max, min;

    max = min = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data > max)
            max = Head->Data;
        if (Head->Data < min)
            min = Head->Data;

        Head = Head->Next;
    }

    return max - min;
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

    printf("Difference = %d\n", Difference(First));

    return 0;
}
