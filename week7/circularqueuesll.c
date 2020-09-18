// circular queue using linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node *f=NULL,*r=NULL,*cur;
void enqueue()
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("enter data to insert:\n");
	scanf("%d",&cur->data);
	cur->link=NULL;
	if(f==NULL)
	{
		cur->link=cur;
		f=r=cur;
	}
	else
	{
		r->link=cur;
		cur->link=f;
		r=cur;
	}
}
void dequeue()
{
	if(f==NULL)
		printf("Circular queue underflow\n");
	else if(f==r)
	{
		printf("deleted data %d\n",f->data);
		f=r=NULL;
	}
	else
	{
		cur=f;
		f=f->link;
		r->link=f;
		printf("deleted data: %d\n",cur->data);
		free(cur);
	}
}
void display()
{
	if(f==NULL)
		printf(" Circular queue is empty");
	else
	{
		cur=f;
		while(cur->link!=f)
		{
			printf("%d->",cur->data);
			cur=cur->link;
		}
		printf("%d->",cur->data);
	}
}

int main()
{
	int ch;
	while(1)
	{
		printf("\n\n");
		printf("PROGRAM FOR CIRCULAR QUEUE\n");
		printf("\n1-enqueue\n2-dequeue\n3-display\n4-exit\n");
		printf("Enter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: enqueue();
			break;
		case 2: dequeue();
			break;
		case 3: display();
			break;
		case 4: exit(0);
		}
	}
}