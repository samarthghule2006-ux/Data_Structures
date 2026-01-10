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

// Insert at beginning
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->Next = NULL;
    newn->Data = no;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

// Second maximum element
int SecMaximum(PNODE Head)
{
    int max1, max2;

    if (Head == NULL || Head->Next == NULL)
        return -1;   // not enough elements

    max1 = max2 = Head->Data;

    Head = Head->Next;

    while (Head != NULL)
    {
        if (Head->Data > max1)
        {
            max2 = max1;
            max1 = Head->Data;
        }
        else if (Head->Data > max2 && Head->Data != max1)
        {
            max2 = Head->Data;
        }

        Head = Head->Next;
    }

    return max2;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = SecMaximum(First);

    printf("Second maximum element is: %d\n", iRet);

    return 0;
}
