#include<stdio.h>
int main()
{
	int i,t,j,x,a[i];
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0,j=7;i<=3;i++,j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j]=t;
	}
	{
		for(i=0;i<=7;i++)
		printf("%d",a[i]);
	}
}

