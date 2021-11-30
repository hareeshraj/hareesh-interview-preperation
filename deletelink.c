#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
int main()
{
	struct node *head,*newnode,*temp;
	int choice,choice1,v,count=0;
	head=temp=0;
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
		
		printf("do you wnt to insert a list if s press 1 or  0 to simply continue:");
		scanf("%d",&choice1);
		if(choice1)
		{
			printf("at which position do you want to insert 1 for frst 2 for position 3 for end");
			scanf("%d",&v);
			if(v==1)
			{ 	newnode=(struct node*)malloc(sizeof(struct node));
					printf("enter the data to be inserted");
		            scanf("%d",&newnode->data);
	            	newnode->next=head;
		            head=newnode;
			}
			else if(v==2)
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
		            while(temp->next!=0)
		            {
		            	temp=temp->next;
					}
			}
			else if(v==3)
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
		printf("to continue enter 1 to exit press 0 :");
		scanf("%d",&choice);
		count++;
	}while(choice);
	int a;
	printf("do you want to delete or display to delete enter 1 ");
	scanf("%d",&a);
	if(a==1)
	{
    struct node*t;
		int del,data,count=0,i=1;
		temp=head;
		printf("enter which element want to delete");
		scanf("%d",&del);
		while(data!=del)
		{
			data=temp->data;
			temp=temp->next;
			count++;
		}
		temp=head;
		while(i<count-1)
		{
			temp=temp->next;
			i++;
		}
		t=temp->next;
    	t=t->next;
    	temp->next=t;
    	
    }
    
    	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}

   	return 0;
}



