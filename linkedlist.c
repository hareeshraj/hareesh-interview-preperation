#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node *temp,*head,*newnode;
int count=0;
void create()
{
	int ch;
		do
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("enter 1 to create link");
		scanf("%d",&ch);
		count++;
		}while(ch);
}
void insert()
{
	int v;
	int choice;
		printf("at which position do you want to insert 1 for frst 2 for position 3 for end");
			scanf("%d",&v);
			switch(v)
			{
			
			case 1:
				{
				
				 	
						newnode=(struct node*)malloc(sizeof(struct node));
						printf("enter the data to be inserted");
		            	scanf("%d",&newnode->data);
	            		newnode->next=head;
		            	head=newnode;
					
			}
			case 2:
				{
				
					
						int pos;
						printf("enter at which pos");
						scanf("%d",&pos);
						if(pos>count)
						{
							printf("invalid position enter the crt pos");
							scanf("%d",&pos);
						}
						temp=head;
						int i;
						for(i=1;i<pos-1;i++)
						{
							temp=temp->next;
						}
							newnode=(struct node*)malloc(sizeof(struct node));
							printf("enter the data to be inserted");
				            scanf("%d",&newnode->data);
				            newnode->next=temp->next;
							temp->next=newnode;
				            
						
		}
			case 3:
				{
				
					 
		 			    temp=head;
						while(temp->next!=0)
						{
							temp=temp->next;
						}
							newnode=(struct node*)malloc(sizeof(struct node));
					        printf("enter the data to be inserted");
				            scanf("%d",&newnode->data);
				            newnode->next=0;
				            temp->next=newnode;
					        temp=newnode;
						
					
				}
		}
	
	
}
void delete()
{
	
    struct node*t;
		int pos,i=1;
		temp=head;
		printf("enter at   which position want to delete");
		scanf("%d",&pos);
		if(pos==1)
		{
			head=head->next;
	    }
	    else if(pos==count)
		{
		   while(i<count-1)
			{
			temp=temp->next;
			i++;
			}
			temp->next=0;
		}
		else
		{
			 while(i<pos-1)
			{
			temp=temp->next;
			i++;
			}
			t=temp->next;
    	    t=t->next;
    	    temp->next=t;
		}

}
void reverse()
{
	struct node *prev,*nextnode;
	prev=0;
	temp=head;
	while(temp!=0)
	{
		nextnode=temp->next;
		temp->next=prev;
		prev=temp;
		temp=nextnode;
	}
	head=prev;	
}
void disp()
{
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}

int main()
{
	int ch;
	head=0;
	printf("enter 1 to create a list");
	scanf("%d",&ch);
	if(ch)
	{
		create();
	}
	printf("\nthe list is created\n");
	printf("enter 1 to insert and 2 for delete and 3 for reverse");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			insert();
			disp();
			break;
		}
		case 2:
		{
			delete();
			disp();
			break;
		}
		case 3:
		{
			reverse();
			disp();
			break;
		}
		
	}
}
