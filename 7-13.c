#include <stdio.h>

void main()
{
	int a,b,c,i;
	int r=0;

	printf("�հ��� ���۰� ==> ");
	scanf("%d",&a);

	printf("�հ��� ���� ==> ");
	scanf("%d",&b);

	printf("��� ==> ");
	scanf("%d",&c);

	for (i=a;i<=b;i++)
	{
		if(i%c==0){
			r+=i;
		}
	}
	printf("%d���� %d������ %d����� �հ� ==> %d",a,b,c,r);
}
