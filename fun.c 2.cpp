#include<stdio.h>
#include<conio.h>
int fun(int[]);
int main()
{
	int i,A[10]={0};
	fun(A);
	for(i=0;i<=9;i++)
	{
		printf("\n%d",A[i]);
}
}
	int fun(int A[])
	{
		int i;
		for(i=0;i<=9;i++)
	{
		A[i]=i;
	}
}

