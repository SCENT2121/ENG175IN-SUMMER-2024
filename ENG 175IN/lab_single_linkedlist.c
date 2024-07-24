#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

bool nodeExist(int data, Node **head);

void appendNode(int data, Node **head);

void printList(Node *head);

int main(void)
{
    Node *head = NULL;

    // Test list 1
    appendNode(1, &head);
    appendNode(2, &head);
    appendNode(3, &head);
    appendNode(4, &head);
    appendNode(5, &head);

    printList(head);

    // Calling function1 : expect printing 5->4->3->2->1->->NULL
    // printListReverse()

    // Calling function2
    // reverserLinkedlist()
    // printList(head): expect 5->4->3->2->1->->NULL

    // function3
    // input: 1->2->3->4->5->->NULL
    // Output: "middle node is 3"

    // function4:
    // input: 1->2->3->4->5->->NULL
    // output (by printList(head4)): 1->2->4->5->->NULL
    // deleteMiddleNode()

    // Test list 2
    Node *head2 = NULL;
    appendNode(21, &head2);
    appendNode(44, &head2);
    appendNode(32, &head2);
    appendNode(45, &head2);
    appendNode(5, &head2);
    appendNode(25, &head2);
    // function3
    // input: 21->44->32->45->5->25->NULL
    // Output: "middle node is 45"
    // findMiddleNode()

    // function4:
    // input: 21->44->32->45->5->25->NULL
    // output (by printList(head4)): 21->44->32->5->25->NULL
    // deleteMiddleNode()

    // Test list 3
    Node *head3 = NULL;
    appendNode(1, &head3);
    appendNode(94, &head3);
    appendNode(37, &head3);
    appendNode(4, &head3);
    appendNode(45, &head3);
    appendNode(58, &head3);

    // input: 1->94->37->4->45->58->NULL
    // Output: "middle node is 37"
    // Calling function3    // findMiddleNode()

    // function4:
    // input: 1->94->37->4->45->58->NULL
    // output (by printList(head4)): 1->94->4->45->58->NULL
    // deleteMiddleNode()

    return 0;
}

/*
    This is a helper function which will help us
    determine if a node exist in the list
*/
bool nodeExist(int data, Node **head)
{
    // setting temp = to the first element of the list
    Node *temp = *head;

    while (temp != NULL)
    {
        if (data == temp->data)
        {
            return true;
        }

        temp = temp->next;
    }

    return false;
}

void appendNode(int data, Node **head)
{

    if (nodeExist(data, head))
    {
        printf("This node already exist in the list\n");
        return;
    }

    // Create a new node using dynamic memory allocation
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    Node *temp = *head;

    // Case 1: Empty list
    if (*head == NULL)
    {
        /*
            before: head -> NULL
        */
        *head = newNode;
        newNode->next = NULL;
        /*               (data, next)
            after: head -> NewNode -> NULL
        */
    }
    else
    {
        /*

         supposed we want to add node (20): want this (51)->(7)->(4)->(20)->NULL
                    temp
         (51)->(7)->(4)->(new)->NULL
        */
        // Case2: List is not empty
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = NULL;
    }
}

// This function prints the linkedlist
void printList(Node *head)
{
    Node *temp = head;
    if (head == NULL)
    {
        printf("Empty list\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("->NULL\n");
}