#include<stdio.h>
int main ()
{
	int x,n;
	printf("nhap so can nhan:");
	scanf("%d",&n);
	for (int i=1;i<=10;i++)
	{
		x = n * i;
		printf("\n%d * %d = %d",n,i,x);
	}
}
