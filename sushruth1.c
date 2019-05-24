#include<stdio.h>
int getinput(int *i,int *j)
{
	printf("\n Enter the numbers:\n");
	scanf("%d %d",i,j);
}

int add(int i,int j)
{	
	return (i+j);
}
int output(int i,int j,int c)
{
	printf("\n %d + %d= %d \n",i,j,c);
}

int main()
{	int i,j,c;
	getinput(&i,&j);
	c=add(i,j);
	output(i,j,c);
}
