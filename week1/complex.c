#include<stdio.h>
struct complex
{
	float real;
	float imag;
};
void add( struct complex c1, struct complex c2)
{
	printf("%f+i%f\n",c1.real+c2.real,c1.imag+c2.imag);
}
void sub(struct complex c1,struct complex c2)
{
	printf("%f+i%f\n",c1.real-c2.real,c1.imag-c2.imag);
}
void mult(struct complex c1,struct complex c2)
{
	float r = c1.real*c2.real-c1.imag*c2.imag;
	float i = c1.real*c2.imag+c2.real*c1.imag;
	printf("%f+i%f\n",r,i);
}
int main()
{
	struct complex c1,c2;
	scanf("%f%f",&c1.real,&c1.imag);
	scanf("%f%f",&c2.real,&c2.imag);
	add(c1,c2);
	sub(c1,c2);
	mult(c1,c2);
}