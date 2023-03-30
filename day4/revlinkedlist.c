#include<stdio.h>
#include<stdlib.h>
int x;

struct node
{
	int data;
	struct node* next;
  struct node * prev;
}*head,*tail;
void display()
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	temp=head;
	if(head==NULL)
	{
		printf("Empty list");
	}
	else
	{
		while(temp->next!=NULL)
		{
			printf("%d  ",temp->data);
			temp=temp->next;
		}
		printf("%d	",temp->data);
	}			
}


void insertend()
{
	struct node*current,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the element to insert\n");
	scanf("%d",&x);
	newnode->prev=NULL;
  newnode->data=x;
	newnode->next=NULL;
	current=head;
	while(current->next!=NULL)
	{
		current=current->next;
	}
	current->next=newnode;
  newnode->prev=current;
  tail=newnode;
}

void rev()
{
  struct node *temp,*stop;
  stop=tail->prev;
  while(stop->next==NULL)
  {
  temp=head;
  head=head->next;
  temp->prev=tail;
  tail->next=temp;
  temp->next=NULL;
  tail=tail->next;
  }
}									
			
	
			
	
	
	
int main()
{
	head=NULL;
	int ch;
	while(1)
	{
		printf("\nLINKED LIST MENU\n");
		printf("1.Display\n2.Insert at end\n3.Reverse\n4.exit");
		printf("Enter your choice(1-7)\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:display();
					break;
			case 2:insertend();
					break;
      case 3:rev();
          break;
			case 4:exit(0);		
			default :printf("wrong choice!!!");
		}
	}
}
				
															
			

		
		
		
		