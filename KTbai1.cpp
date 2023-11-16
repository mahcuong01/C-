#include<stdio.h>
int main ()
{
	float a,b,c;
    	printf("nhap diem mon toan:");
	scanf("%f",&a);
		printf("nhap diem mon ly:");
	scanf("%f",&b);
		printf("nhap diem mon hoa:");
	scanf("%f",&c);
	
	 float x = (a+b+c)/3;
	 printf("diem trung binh ba mon:%.2f\n",x);
	 if(x>9){
	 	printf("hoc sinh gioi\n");
	 }
	 else if(x>=7){
	 	("hoc sinh kha\n");
	 }
	 else{
	 	("hoc sinh trung binh\n");
	 }
}
