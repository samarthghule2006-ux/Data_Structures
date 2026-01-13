#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool CheckSorted(PNODE Head)
{
    if (Head == NULL)
        return true;

    while (Head->Next != NULL)
    {
        if (Head->Data > Head->Next->Data)
            return false;

        Head = Head->Next;
    }

    return true;
}

int main()
{
    PNODE First = NULL;

    // Sorted list example
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    if (CheckSorted(First))
        printf("List is sorted in ascending order\n");
    else
        printf("List is NOT sorted\n");

    return 0;
}
