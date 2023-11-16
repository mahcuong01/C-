#include<stdio.h>
int main()
{
	int a,b;
	int y=0;
	printf("nhap so lan cho:");
	scanf("%d",&b);
	for(int i=1;i<b;i++)
	{
		printf("nhap so thu:%d:",i);
		scanf("%d",&a);
		if(i%2!=0) 
		y= y+a;
	}
	printf("tong:%d",y);
}
