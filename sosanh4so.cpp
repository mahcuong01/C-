
#include<stdio.h>

int main()
{
	int a,b,c,d,x,y;
	printf("Nhap so a:");
	scanf("%d",&a);
	printf("Nhap so b:");
	scanf("%d",&b);
	printf("Nhap so c:");
	scanf("%d",&c);
	printf("Nhap so d:");
	scanf("%d",&d);
	if(a<b)
	{
		x=b;
	}
	else 
		x=a;
	if(c<d)
	{
		y=d;
	}
	else
		y=c;
	if(x<y)
	{
		printf("So lon nhat la:%d",y);
	}
	else
	{
		printf("So lon nhat la:%d",x);
	}
	
}
