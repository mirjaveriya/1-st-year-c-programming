#include<stdio.h>
#include<process.h>
void seats(void);
int row,coloumn,a[5][4]={0},i,j;
int main()
{
int i,ch;
do{
	printf("\nchoise based menu program");
	printf("\n enter 1 for time 9:30 AM to 12:00 PM");
	printf("\n enter 2 for time 12:00 PM to 3:00 PM ");
	printf("\n enter 3 for time 3:00  PM to 6:00 PM");
	printf("\n enter 4 for time 6:00 PM to 9:00 PM");
	printf("\n enter 0 for exit");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: 
		 do{
	printf("\nchoise based menu program");
	printf("\n enter 1 for Thor");
	printf("\n enter 2 for Lion king");
	printf("\n enter 3 for iron man");
	printf("\n enter 0 for exit");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("No off Rows=5, Coloumn=4\n");
		printf("Plese enter the row\n");
		scanf("%d",&row);
		printf("column u want seat off\n");
		scanf("%d",&coloumn);
				if(a[row][coloumn]==0)
			{		
			printf("The seat Is Booked");
			}	
			else
			seats();
			
		break;
		case 2:
	    seats();
	    break;
		case 3:
	    seats();
		break;
		case 0: exit(0);
		default : printf("default case ");
		break;
	}
}
	while(1);

		break;
		case 2:
			do{
			printf("\nchoise based menu program");
			printf("\n enter 1 for Thor");
			printf("\n enter 2 for Lion king");
			printf("\n enter 3 for iron man");
			printf("\n enter 0 for exit");
			scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			seats();
		break;
		case 2:
			seats();
		
	    break;
		case 3:
			seats();
		break;
		case 0: exit(0);
		default : printf("default case ");
		break;
	}
}
	while(1);
	    break;
		case 3:
			do{
	printf("\nchoise based menu program");
	printf("\n enter 1 for Thor");
	printf("\n enter 2 for Lion king");
	printf("\n enter 3 for iron man");
	printf("\n enter 0 for exit");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			seats();
		break;
		case 2:
			seats();
	    break;
		case 3:
			seats();
		break;
		case 0: exit(0);
		default : printf("default case ");
		break;
	}
}
	while(1);
    break;

		case 0: exit(0);
		default : printf("default case ");
		break;
	}
}
	while(1);
}
void seats()
	{	
	printf("No off Rows=5, Coloumn=4\n");
	printf("Plese enter the row\n");
	scanf("%d",&row);
	printf("column u want seat off\n");
	scanf("%d",&coloumn);
	a[row-1][coloumn-1]=1;
	for(i=0;i<=4;i++)
	{for(j=0;j<=3;j++)
	{
	
	printf("%d  ",a[i][j]);
	}
		printf("\n");
	}
	
	}
	

