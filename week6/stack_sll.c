#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*top=NULL,*cur;
void push()
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter current node data:\n");
	scanf("%d",&(cur->data));
	cur->link=top;
	top=cur;
}
void pop()
{
	cur=(struct node*)malloc(sizeof(struct node));
	cur=top;
	top=cur->link;
	printf("Deleted element is : %d\n",(cur->data));
	cur->link=NULL;
	free(cur);
}
void display()
{
	if(top==NULL)
		printf("Stack underflow.\n");
	else
	{
		cur=top;
		printf("Stack=>");
		while(cur!=NULL)
		{
			printf("%d->\n",cur->data);
			cur=cur->link;
		}
	}

}
void peek()
{
	if(top!=NULL)
		printf("The top most element is : %d\n",top->data);
	else
		exit(1);
}
int main()
{
	int ch;
	while(1)
	{
		printf("Programs for stack\n");
		printf("1:Push\n");
		printf("2:Pop\n");
		printf("3:Display\n");
		printf("4:Peek\n");
		printf("5:Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: push();
		break;
		case 2: pop();
		break;
		case 3: display();
		break;
		case 4: peek();
		break;
		case 5: exit(0);
		
		}
	}
	return 0;

}