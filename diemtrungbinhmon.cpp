#include<stdio.h>
int main ()
{
	float toan,ly,hoa;
		printf("nhap diem mon toan:");
	scanf("%f",&toan);
		printf("nhap diem mon ly:");
	scanf("%f",&ly);
		printf("nhap diem mon hoa");
	scanf("%f",&hoa);
		printf("tran mnah cuong\n");
		printf("diem trung binh cac mon:%.2f\n",(toan,ly,hoa)/3);
}
