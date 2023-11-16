#include<stdio.h>
int main()
{
	//ho ten,ngay thang nam sinh,gioi tinh
	
	char name[20],mail[10];
	int ngaysinh,thangsinh,namsinh;
	printf("nhap ho va ten cua may la gi ghi vo:");
	gets(name);
	printf("nhap ngay sinh cua may la gi ghi vo:");
	scanf("%d",&ngaysinh);
	printf("nhap thang sinh cua may la gi ghi vo:");
	scanf("%d",&thangsinh);
	printf("nhap nam sinh cua may la gi ghi vo:");
	scanf("%d",&namsinh);
	printf("nhap gioi tinh cua may la gi ghi vo:");
	fflush(stdin);
	gets(mail);
	
	//xuat du lieu
	printf("ho va ten la:%s\n",name);
	printf("ngay_thang_namsinh:%d-%d-%d\n",ngaysinh,thangsinh,namsinh);
	printf("gioi tinh la:%s\n",mail);
}
 
