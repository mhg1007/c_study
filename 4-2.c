#include <stdio.h>

void main()
{
	int a=2,b=3,c=4;
	int result1,mok,nanugi;
	float result2;

	result1=a+b-c;
	printf("%d+%d-%d=%d \n",a,b,c,result1);

	result1=a+b*c;
	printf("%d+%d*%d=%d \n",a,b,c,result1);

	result2=a*b/(float)c;
	printf("%d*%d/%d=%f \n",a,b,c,result2);

	mok=c/b;
	printf("%d/%d�� ���� %d \n",c,b,mok);
	
	nanugi=c%b;
	printf("%d/%d�� �������� %d \n",c,b,nanugi);
}
