#include <stdio.h>

void main()
{
	enum week{ sun, mon, tue, wed, thu, fri, sat };
	enum week ww;
	ww=0;

	if(ww==sun)
		printf("������ �Ͽ����Դϴ�.\n");
	else
		printf("������ �Ͽ����� �ƴմϴ�.\n");
}
