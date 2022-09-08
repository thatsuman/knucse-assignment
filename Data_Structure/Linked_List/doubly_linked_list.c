// Double Linked List

#include <stdio.h>
#include <stdlib.h>

struct linked_list {
    struct linked_list *prev;
    int data;
    struct linked_list *next;
};

typedef struct linked_list node;

void create (node **);
void insert (node *, int);
void delete (node **, int);
int print (node *p);
int count (node *);

int main () {
    
    node *head = NULL;
    int c;

    create(&head);
    printf("\n____after creation___");
    print(head);

    insert(head,8);
    printf("\n____after insertion___");
    print(head);

    delete(&head,8);
    printf("\n____after deletion___");
    print(head);

    c=count(head);
    printf("\n the count:%d",c);


    return 0;

}
