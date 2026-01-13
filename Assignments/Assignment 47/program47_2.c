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

int DigitCount(int no)
{
    int count = 0;
    while (no != 0)
    {
        count++;
        no /= 10;
    }
    return count;
}

void CountDigits(PNODE Head)
{
    while (Head != NULL)
    {
        printf("%d -> %d\n", Head->Data, DigitCount(Head->Data));
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 6);
    InsertFirst(&First, 300);
    InsertFirst(&First, 100);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    CountDigits(First);
    return 0;
}
