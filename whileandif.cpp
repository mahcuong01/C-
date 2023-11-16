#include<stdio.h>
int main ()
{
	int a=5;
	while(a<20){
		printf("gia tri cua a:%d\n",a);
		a++;
		if(a>15){
			break;
		}
	}
	return 0;
}
