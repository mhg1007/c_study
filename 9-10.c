#include <stdio.h>

void main()
{
	int a,b,tmp;
	int *p1,*p2;

	p1=&a;
	p2=&b;

	printf("a 값 입력 : ");
	scanf("%d",&a);

	printf("b 값 입력 : ");
	scanf("%d",&b);

	tmp=*p1;
	*p1=*p2;
	*p2=tmp;
	
	printf("바뀐 값 a는 %d, b는 %d\n",a,b);
}
