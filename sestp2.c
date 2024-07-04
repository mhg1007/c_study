#include <stdio.h>

int main(){
	int array[3]={10,20,30};
	printf("%x %x %x \n",array,array+0,&array[0]);
	printf("%d %d %d \n",*array,*(array+0),*&array[0]);
}
