#include <stdio.h>

int main(){
	int array[3]={10,20,30};
	int *p=array;

	printf("%x %x %x \n",p,p+0,&p[0]);
	printf("%d %d %d \n",*p,*(p+0),*&p[0]);
}
