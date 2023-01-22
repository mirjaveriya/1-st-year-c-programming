 #include<stdio.h>
int main()
{
	int i,A[10]={0,1,2,3,4,5,6,7,8,9};
	int max=0,jmax=0;
	for(i=0;i<=9;i++)
	{
		if(A[i]>max)
		{ jmax = max;
		max = A[i];
		}
		else
		if(A[i]>jmax)
		{
			jmax=A[i];
		}
	}
	for(i=0;i<=9;i++)
	{
	printf("\n%d %d",max,jmax);
}
}

