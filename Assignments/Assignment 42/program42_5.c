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

// find minimum element
int Minimum(PNODE Head)
{
    if (Head == NULL)
        return -1;   // empty list

    int min = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data < min)
            min = Head->Data;

        Head = Head->Next;
    }

    return min;
}

// Main
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);

    iRet = Minimum(First);

    printf("Smallest element is: %d\n", iRet);

    return 0;
}
