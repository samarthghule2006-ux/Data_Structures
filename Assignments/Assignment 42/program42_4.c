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

// Insert at beginning
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

// Display list
void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d|->", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

// find maximum element
int Maximum(PNODE Head)
{
    if (Head == NULL)
        return -1;   // list empty case

    int max = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data > max)
            max = Head->Data;

        Head = Head->Next;
    }

    return max;
}

// Main
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = Maximum(First);

    printf("Largest element is: %d\n", iRet);

    return 0;
}
