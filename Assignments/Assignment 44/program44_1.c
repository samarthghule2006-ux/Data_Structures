#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

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

BOOL Search(PNODE Head, int No)
{
    while (Head != NULL)
    {
        if (Head->Data == No)
            return TRUE;
        Head = Head->Next;
    }
    return FALSE;
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

    if (Search(First, 101))
        printf("Element found\n");
    else
        printf("Element not found\n");

    return 0;
}
