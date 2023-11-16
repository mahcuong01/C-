#include<stdio.h>
int main ()
{
	int a,b,c,d,x,y;
	printf("nhap so a vao:");
	scanf("%d",&a);
	printf("nhap so b vao:");
	scanf("%d",&b);
	printf("nhap so c vao:");
	scanf("%d",&c);
	printf("nhap so d vao:");
	scanf("%d",&d);
	
	if(a>b){
		x=a;
	}
	else if(b>a){
		x=b;
	}
	else{
		x=a;
	}
	printf("so lon hon giua a va b la:%d\n",x);
	
		if(c>d){
		y=c;
	}
	else if(c<d){
		y=d;
	}
	else{
		y=c;
	}
	printf("so lon hon giua c va d la:%d\n",y);
	
	if (x>y){
		printf("so lon hon giua x va y:%d\n",x);
	}
	else if(x<y){
		printf("so lon hon giua x va y:%d\n",y);
	}
	 
	 
}
