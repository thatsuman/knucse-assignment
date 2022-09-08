// Create a Singly Linked List and Implement Insert, Delete, Print, Count and Reverse Nodes

#include <stdio.h>
#include <stdlib.h>

// structure defination for node
struct linkedList {
    int data;
    struct linkedList *next;
};

typedef struct linkedList node;

node *head = NULL;

// function prototypes 

void create (node *);
void print ();
int count ();
void insBeg ();
void insEnd ();
void insBet ();
void delBeg ();
void delBet ();
void delEnd ();
void reverse ();
 
// main function
int main () {
    int choice;

    while (1) {
        printf ("\n----------MENU----------------\n");
        printf ("1.Create Node\n");
        printf ("2.Insert Node\n");
        printf ("3.Delete Node\n");
        printf ("4.Show Total Number of Nodes\n");
        printf ("5.Display the Linked List\n");
        printf ("6.Reverse the Linked List\n");
        printf ("0.Exit\n");
        printf ("\n-------------------------------\n");

        printf ("Enter the choice: ");
        scanf ("%d", &choice);

        if (choice == 0)
            break;
        else {
            switch (choice) {
                case 1:
                    head = (node *) malloc (sizeof(node));
                    create (head);
                    break;
                case 2:
                    int ch;
                    printf ("1.Insert Node at Beginning\n");
                    printf ("2.Insert Node at Middle\n");
                    printf ("3.Insert Node at End\n");

                    printf ("Enter the choice: ");
                    scanf ("%d", &ch);
                    switch (ch) {
                        case 1:
                            insBeg ();
                            break;
                        case 2:
                            insBet ();
                            break;
                        case 3:
                            insEnd ();
                            break;
                        default:
                            printf ("\n------------Invalid Input-----------\n");  
                    }
                    break;
                case 3:
                    int ch2;

                    printf ("1.Delete Node at Beginning\n");
                    printf ("2.Delete Node at Middle\n");
                    printf ("3.Delete Node at End\n");
                    printf ("Enter the choice: ");
                    scanf ("%d", &ch2);
                    switch (ch2) {
                        case 1:
                            delBeg ();
                            break;
                        case 2:
                            delBet ();
                            break;
                        case 3:
                            delEnd ();
                            break;
                        default:
                            printf ("\n------------Invalid Input-----------\n");  
                    }
                    break;
                case 4:
                    printf ("\nTotal Number of node is: %d\n", count ());
                    break;
                case 5:
                    print ();
                    break;
                case 6:
                    reverse ();
                    print ();
                    break;
                default:
                    printf ("\n------------Invalid Input-----------\n");
            }
        }
    }
    return 0;
}

// function for create node
void create (node *item) {
    int choice;

    printf ("Enter value for data part in node: ");
    scanf ("%d", &item->data);

    printf ("----------MENU----------\n");
    printf ("1.I want to create another node\n");
    printf ("2.I don't want to create another node\n"); 
    printf ("Enter the choice: ");
    scanf ("%d", &choice);

    if (choice == 1) {
        item->next = (node *) malloc (sizeof(node));
        create (item->next);
    }
    else {
        item->next = NULL;
    }
}

// function for display node data
void print () {
    node *item;

    if (head == NULL) {
        printf ("Linked List is Empty.\n");
        exit (1);
    }
    else {
        item = head;
        printf ("\n-------------------------------\n");
        while (item != NULL) {
            printf ("%d->", item->data);
            item = item->next;
        }
        printf ("\n-------------------------------\n");
    }
}

//function for count number of Nodes
int count () {
    node *item;

    int cnt = 0;
    if (head != NULL) {
        item = head;
        while (item != NULL) {
            cnt++;
            item = item->next;
        }
    }
    return cnt;
}

// function for insert node at beginning 
void insBeg () {
    node *ptr;

    if (head == NULL) {
        head = (node *) malloc (sizeof(node));
        printf ("\nEnter value for data part in node: ");
        scanf ("%d", &head->data);
        head->next = NULL;
    }
    else {
        ptr = (node *) malloc (sizeof(node));
        printf ("\nEnter value for data part in node: ");
        scanf ("%d", &ptr->data);
        ptr->next = head;
        head = ptr;
    }
}

// function for insert node at the end 
void insEnd () {
    node *ptr, *item;

    if (head == NULL) {
        head = (node *) malloc (sizeof(node));
        printf ("\nEnter value for data part in node ");
        scanf ("%d", &head->data);
        head->next = NULL;
    }
    else {
        ptr = (node *) malloc (sizeof(node));
        printf ("\nEnter value for data part in node ");
        scanf ("%d", &ptr->data);
        item = head;
        while (item->next != NULL) {
            item = item->next;
        }
        item->next = ptr;
        ptr->next = NULL;
    }
}

// function for insert node in between of Nodes 
void insBet () {
    node *prev, *item, *ptr;
    int nodePosition, totalNode, i;

    if (head == NULL) {
        head = (node *) malloc (sizeof(node));
        printf ("\nEnter value for data part in node: ");
        scanf ("%d", &head->data);
        head->next = NULL;
    }
    else {
        printf ("\nEnter position you want to insert node: ");
        scanf ("%d", &nodePosition);

        totalNode = count ();

        if (nodePosition > 1 && nodePosition < totalNode) {
            ptr = (node *) malloc (sizeof(node));
            printf ("\nEnter value for data part in node: ");
            scanf ("%d", &ptr->data);

            item = head;
            i = 1;
            while (i < nodePosition) {
                prev = item;
                item = item->next;
                i++;
            }
            prev->next = ptr;
            ptr->next = item;
        }
        else    
            printf ("\nInvalid Positon or\n Try to insert 2nd to %d Position", count()); 
    }
}

//function for delete node at the beginning
void delBeg () {
    node *item;

    if (head == NULL) 
        printf ("\nLinked List is Empty. Nothing to Delete");
    else {
        item = head;
        head = head->next;
        item->next = NULL;
        free (item);
    }
}

//function for delete node at the end
void delEnd () {
    node *item, *prev;

    if (head == NULL)
        printf ("\nLinked List is Empty. Nothing to Delete");
    else {
        item = head;
        while (item->next != NULL) {
            prev = item;
            item = item->next;
        }
        prev->next = NULL;
        free (item);
    }  
}

//function for delete node in between of Nodes
void delBet () {
    node *item, *prev;
    int nodePosition, totalNode, i;
    
    if (head == NULL) 
        printf ("\nLinked List is Empty. Nothing to Delete");
    else {
        printf ("\nEnter Node Position.");
        scanf ("%d", &nodePosition);
        totalNode = count ();
        if (nodePosition >= 1 && nodePosition <= totalNode) {
            item = head;
            i = 1;
            while (i < nodePosition) {
                prev = item;
                item = item->next;
                i++;
            }
            prev->next = item->next;
            item->next = NULL;
            free (item);
        }
        else {
            printf ("\nInvalid Position");
        }
    }
}   

// function for reverse a linked List
void reverse () {
    node *item, *prev = NULL;
    if (head == NULL)   
        printf ("\nLinked List is Empty. Nothing to Delete");
    else {
        item = head;
        while (head != NULL) {
            item = item->next;
            head->next = prev;
            prev = head;
            head = item;
        }
        head = prev;
    }
}
