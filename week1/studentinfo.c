#include<stdio.h>
#include<string.h>
struct student
{
	char rollnum[11];	
	char name[30];
	int m[4];
};
int main()
{
	struct student s[3];
	float total = 0,avg;
	char grade;
	int i,j;
	for(i=0;i<3;i++)
	{
		total=0;
		scanf("%s",s[i].rollnum);
		scanf("%s",s[i].name);
		for(j=0;j<4;j++)
		{
			scanf("%d",&s[i].m[j]);
			total = total + s[i].m[j];
		}
		avg = total / 4.0;
		if (avg >= 75.0) 
		{
			grade= 'A';
		}
		else if (avg < 75 && avg >= 50)
		{
			grade = 'B';
		}
		else
		{
			grade = 'C';
		}		
       		printf("rollnum=%s\t name= %s\t grade=%c\n",s[i].rollnum,s[i].name,grade);
	}	
}
	