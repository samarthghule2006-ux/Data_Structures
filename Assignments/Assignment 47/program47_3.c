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

int DigitSum(int no)
{
    int sum = 0;
    while (no != 0)
    {
        sum += no % 10;
        no /= 10;
    }
    return sum;
}

void SumDigits(PNODE Head)
{
    while (Head != NULL)
    {
        printf("%d -> %d\n", Head->Data, DigitSum(Head->Data));
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    SumDigits(First);
    return 0;
}
