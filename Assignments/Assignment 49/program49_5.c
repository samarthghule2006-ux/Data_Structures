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

int CountTwoDigit(PNODE Head)
{
    int count = 0;
    int num;

    while (Head != NULL)
    {
        num = Head->Data;

        if ((num >= 10 && num <= 99) || (num <= -10 && num >= -99))
            count++;

        Head = Head->Next;
    }

    return count;
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

    printf("Two digit count = %d\n", CountTwoDigit(First));

    return 0;
}
