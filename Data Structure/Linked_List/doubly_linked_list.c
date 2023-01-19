// Create a Doubly Linked List and Implement Insert, Delete, Print, Count and Reverse Nodes

#include <stdio.h>
#include <stdlib.h>

struct doubly_linked_list {
    struct doubly_linked_list *prev;
    int data;
    struct doubly_linked_list *next;
};

typedef struct doubly_linked_list node;

node *head = NULL;

void create ();
void display ();
void insAtBeg ();
void insAtPos ();
void insAfterPos ();
void insAtEnd ();
void delAtBeg ();
void delAtPos ();
void delAtEnd ();
void reverse ();
int count ();


int main () {
    int choice;

    create ();
    display ();

    // while (1) {
    //     printf ("\n----------MENU----------------\n");
    //     printf ("1.Create Node\n");
    //     printf ("2.Insert Node\n");
    //     printf ("3.Delete Node\n");
    //     printf ("4.Show Total Number of Nodes\n");
    //     printf ("5.Display the Linked List\n");
    //     printf ("6.Reverse the Linked List\n");
    //     printf ("0.Exit\n");
    //     printf ("\n-------------------------------\n");

    //     printf ("Enter the choice: ");
    //     scanf ("%d", &choice);

    //     if (choice == 0)
    //         break;
    //     else {
    //         switch (choice) {
    //             case 1:
    //                 create ();
    //                 break;
    //             case 2:
    //                 int ch;
    //                 printf ("1.Insert Node at Beginning\n");
    //                 printf ("2.Insert Node at Position\n");
    //                 printf ("3.Insert Node at End\n");

    //                 printf ("Enter the choice: ");
    //                 scanf ("%d", &ch);
    //                 switch (ch) {
    //                     case 1:
    //                         insAtBeg ();
    //                         break;
    //                     case 2:
    //                         insAtPos ();
    //                         break;
    //                     case 3:
    //                         insAfterPos ();
    //                         break;
    //                     case 4:
    //                         insAtEnd ();
    //                         break;
    //                     default:
    //                         printf ("\n------------Invalid Input-----------\n");  
    //                 }
    //                 break;
    //             case 3:
    //                 int ch2;

    //                 printf ("1.Delete Node at Beginning\n");
    //                 printf ("2.Delete Node at Middle\n");
    //                 printf ("3.Delete Node at End\n");
    //                 printf ("Enter the choice: ");
    //                 scanf ("%d", &ch2);
    //                 switch (ch2) {
    //                     case 1:
    //                         delAtBeg ();
    //                         break;
    //                     case 2:
    //                         delAtPos ();
    //                         break;
    //                     case 3:
    //                         delAtEnd ();
    //                         break;
    //                     default:
    //                         printf ("\n------------Invalid Input-----------\n");  
    //                 }
    //                 break;
    //             case 4:
    //                 printf ("\nTotal Number of node is: %d\n", count ());
    //                 break;
    //             case 5:
    //                 display ();
    //                 break;
    //             case 6:
    //                 reverse ();
    //                 display ();
    //                 break;
    //             default:
    //                 printf ("\n------------Invalid Input-----------\n");
    //         }
    //     }
    // }
    return 0;
}

// function for display linked list
void display () {
    node *item = head;

    if (head == NULL) {
        printf ("Linked List is Empty.\n");
        exit (1);
    }
    else {
        printf ("\n-------------------------------\n");
        while (item != NULL) {
            printf ("%d->", item->data);
            item = item->next;
        }
        printf ("\n-------------------------------\n");
    }
}

//function for create node
void create () {
    node *tail, *newnode;
    int ch = 1;

    while (ch) {
        newnode = (node *)malloc(sizeof(node));

        printf ("\nEnter the value for data part in node: ");
        scanf ("%d", &newnode->data);    

        if (head == NULL) {
            head = tail = newnode;
            head->prev = NULL;
            tail->next = NULL;
        }
        else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
            tail->next = NULL;
        }
       
        printf ("Continue to create another node?\n");
        printf ("1.YES!\n");
        printf ("0.NO!\n");
        scanf ("%d", &ch);
    }
}