
#include<stdio.h>
#include<stdlib.h>
struct node {

int data ;
struct node * next;

};

struct node *head=NULL ,*last=NULL;


void insertbeg(int data)
{ struct node *temp=(struct node*)malloc(sizeof(struct node));

 if(head==NULL)
 { temp->data=data;
   temp->next=NULL;
   last=head=temp;
 }
else {
    temp->data=data;
    temp->next=head;
    head=temp;

} }





void display()
{   if(head==NULL)
 {
     printf("\n underflow");
 }
      struct node *t=head;
     while(t->next!=NULL)
     {
         printf("%d - ->",t->data);
         t=t->next;
     }
printf("%d",t->data);
}
int count(struct node *head)
{
    if (head==NULL)
        return 0;
    else
    return 1+count(head->next);
}

int main()
{

int option=1 ;
int data;
while(option)
{
    printf("\nENTER DATA : ");
    scanf("%d",&data);

    insertbeg(data);
    display();


    printf("\n WANT TO ENTER MORE : ");
    scanf("%d",&option);
}
printf("THERE ARE %d ELEMENTS: ",count(head));
display();


return 0;}
