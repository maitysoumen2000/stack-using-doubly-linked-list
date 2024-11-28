#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#define MAX 100

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start = NULL;
int top = -1;
struct node *display(struct node *start);
struct node *push(struct node *start, int num);
struct node *pop(struct node *start);
struct node *peek(struct node *start);

int main()
{
    int val, e;
    start = push(start, 7);
    start = push(start, 0);
    start = push(start, 5);
    
    printf("current view of stack: ");
    start = display(start);
    printf("\n\n");
    if (start == '\0')
    {
        printf("stack is empty");
    }
    else
    {
        start = pop(start);
        printf("after poping stack view: ");
        start = display(start);
    }
    printf("\n\n");
    start = push(start, 1);
    printf("current view of stack: ");
    start = display(start);
    printf("\n\n");
    printf("Top element of the stack: ");
    start = peek(start);
}

struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return start;
}

struct node *push(struct node *start, int num)
{
    struct node *new_node, *ptr;
    if (top < MAX - 1)
    {
        if (start == NULL)
        {
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->prev = NULL;
            new_node->data = num;
            new_node->next = NULL;
            start = new_node;
            top++;
            return start;
        }
        else
        {
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->prev = NULL;
            new_node->data = num;
            new_node->next = start;
            start = new_node;
            top++;
            return start;
        }
    }
    else
    {
        printf("stack overflow\n");
        return start;
    }
}

struct node *pop(struct node *start)
{

    struct node *p;
    p = start;
    start = start->next;
    start->prev = NULL;
    free(p);
    top--;
    return start;
}
struct node *peek(struct node *start)
{
    printf("%d", start->data);
    return start;
}
