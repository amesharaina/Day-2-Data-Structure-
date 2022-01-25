// C program to find middle of linked list
#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node* next;
};
 
void printMiddle(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *ptr1 = head;
 
    if (head!=NULL)
    {
        while (ptr1 != NULL && ptr1->next != NULL)
        {
            ptr1 = ptr1->next->next;
            ptr = ptr->next;
        }
        printf("The middle element is [%d]\n\n", ptr->data);
    }
}
 
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =
        (struct Node*) malloc(sizeof(struct Node));
 
    new_node->data = new_data;
 
    new_node->next = (*head_ref);
 
    (*head_ref) = new_node;
}
 
void printList(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("NULL\n");
}
 
int main()
{
    struct Node* head = NULL;
    int i;
 
    for (i=20; i>0; i--)
    {
        push(&head, i);
        printList(head);
        printMiddle(head);
    }
 
    return 0;
}
