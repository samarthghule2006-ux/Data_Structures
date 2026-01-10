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

// Search last occurrence
int SearchLastOcc(PNODE Head, int no)
{
    int position = 1;
    int lastPos = -1;

    while (Head != NULL)
    {
        if (Head->Data == no)
        {
            lastPos = position;
        }

        Head = Head->Next;
        position++;
    }

    return lastPos;
}

// Main
int main()
{
    PNODE First = NULL;
    int pos = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);

    pos = SearchLastOcc(First, 30);

    printf("Last occurrence of 30 is at position: %d\n", pos);

    return 0;
}
