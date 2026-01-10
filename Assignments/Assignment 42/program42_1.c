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

// Insert node at beginning
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

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

// Display linked list
void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d|->", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

// Function required in question
int SearchFirstOcc(PNODE Head, int no)
{
    int position = 1;

    while (Head != NULL)
    {
        if (Head->Data == no)
        {
            return position;
        }

        Head = Head->Next;
        position++;
    }

    return -1;   // if element not found
}

// Main function
int main()
{
    PNODE First = NULL;
    int pos = 0;

    // Creating linked list
    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Linked List:\n");
    Display(First);

    // Search first occurrence of 30
    pos = SearchFirstOcc(First, 30);

    if (pos == -1)
        printf("Element not found\n");
    else
        printf("First occurrence of 30 is at position: %d\n", pos);

    return 0;
}
