#include<stdio.h>
int binary_search(int n,int a[50],int key)
{
	int mid,pos=-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(a[mid]==key)
		{
			pos=mid;
			break;
		}
		else if(a[mid]<key)
		{
			first=mid+1;
		}
		else
		{
			last=mid-1;
		}
	}
	return pos;
}
int main()
{
	int i,pos,n,key,a[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&key);
	pos=linear_search(n,a,key);
	if(pos==-1)
	{
		printf("element not present");
	}
	else
	{
		printf("element present at position %d",pos+1);
	}
}