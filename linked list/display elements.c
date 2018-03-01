#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
typedef struct node node;
node *head,*one,*two,*three,*current;
int main(void)
{
    head=(node *)malloc(sizeof(node));
    one=(node *)malloc(sizeof(node));
    two=(node *)malloc(sizeof(node));
    three=(node *)malloc(sizeof(node));
    head->data=20;
    head->next=two;
    two->data=60;
    two->next=three;
    three->data=80;
    three->next=NULL;
    current=head;
    while(current!=NULL)
    {
        printf("%d\t",current->data);
        current=current->next;
    }
    }
    
