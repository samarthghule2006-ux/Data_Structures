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

int Frequency(PNODE Head, int No)
{
    int count = 0;
    while (Head != NULL)
    {
        if (Head->Data == No)
            count++;
        Head = Head->Next;
    }
    return count;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 121);
    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    printf("Frequency of 11: %d\n", Frequency(First, 11));
    return 0;
}
