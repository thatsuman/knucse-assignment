#include<stdio.h>
#include<stdlib.h>

struct linked_list
{
 int data;
 struct linked_list *next;
};

typedef struct linked_list node;

void create(node **);
void insert(node *,int);
void delete(node **,int);
void print(node *);
int count(node *);

void main()
{
 node *head=NULL;
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

}

void create(node ** p)
{
 char ch;
 node *q=NULL;
 printf("\n____creation started___");
 *p=(node *)malloc(sizeof(node));
 (*p)->next=NULL;
 printf("\n enter data:");
 scanf("%d",&(*p)->data);
 q=*p;
 while(1)
  {
   fflush(stdin);
   printf("\n continue(y/n):");
   scanf("%c",&ch);
   if(ch=='n')
     break;
   else
    {
      q->next=(node *)malloc(sizeof(node));
      q->next->next=NULL;
      printf("\n enter data:");
      scanf("%d",&q->next->data);
      q=q->next;
    }
  }
}

 void print(node *p)
 { printf("\n");
  while(p!=NULL)
   {
     printf("%d--", p->data);
     p=p->next;
   }
 }
 void insert(node *p,int k)
  {
      int flag=0;node *t;
      while(p!=NULL)
      {
        if(p->data==k)
        {
            flag=1;
            t=(node *)malloc(sizeof(node));
            t->next=NULL;
            printf("\n enter data you want to insert:");
            scanf("%d",&t->data);
            if(p->next==NULL)
                p->next=t;
            else
            {
                t->next=p->next;
                p->next=t;
            }
            break;

        }
        p=p->next;

       }

       if(flag==0)
        printf("\n key value missing, so unable to insert");
  }

 void delete(node **p,int k)
  {
      int flag=0;node *t,*s;
      s=t=*p;
      while(t!=NULL)
      {

        if(t->data==k)
        {
            flag=1;
            if(t==s)
            {
                *p=t->next                                                                                                                                  ;
            }
            else
            {
                s->next=t->next;
            }
            break;
            free(t);

        }
        s=t;
        t=t->next;

       }
       if(flag==0)
        printf("\n key value missing, so unable to delete");
  }
int count(node *p)
 {
  int n=0;
  while(p!=NULL)
   {
     p=p->next;
     n++;
   }
   return n;
 }