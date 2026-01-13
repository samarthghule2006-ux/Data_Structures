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

int LastOccur(PNODE Head, int No)
{
    int pos = 1, last = -1;

    while (Head != NULL)
    {
        if (Head->Data == No)
            last = pos;

        pos++;
        Head = Head->Next;
    }
    return last;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 21);
    InsertFirst(&First, 40);
    InsertFirst(&First, 50);
    InsertFirst(&First, 21);
    InsertFirst(&First, 30);
    InsertFirst(&First, 21);
    InsertFirst(&First, 10);

    printf("Last occurrence of 21: %d\n", LastOccur(First, 21));
    return 0;
}
