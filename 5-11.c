#include <stdio.h>

void main()
{
	int a,c,d;
	char b;
	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d",&a,&b,&c);

	switch (b)
	{
		case '+':
			d=a+c;
			printf("%d %c %d = %d 입니다.",a,b,c,d);
			break;
		case '-':
			d=a-c;
			printf("%d %c %d = %d 입니다.",a,b,c,d);
			break;
		case '*':
			d=a*c;
			printf("%d %c %d = %d 입니다.",a,b,c,d);
			break;
		case '/':
			d=a/c;
			printf("%d %c %d = %d 입니다.",a,b,c,d);
			break;
		case '%':
			d=a%c;
			printf("%d %c %d = %d 입니다.",a,b,c,d);
			break;
		default:
			printf("연산자를 잘못 입력했습니다.");
	}
}

