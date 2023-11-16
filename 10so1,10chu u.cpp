#include<stdio.h>
void inKT (char a)
{
	for(int i=1;i<=10;i++){
		printf("%c\n",a);
	}
}
int main()
{
	inKT('1');
	char c = 'u';
	inKT (c);
}
