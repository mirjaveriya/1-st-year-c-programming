#include<stdio.h>
void fun(int);
void main()
{
	int x=1;
	printf("enter a number");
	scanf("%d",&x);
	fun(x);
}
void fun(int y)
{
	int z;
 z=y%2;  
	if(z==0)
	{
	printf("number is even\n");
    }
	else
	{
	printf("number is odd\n");
 }
}

