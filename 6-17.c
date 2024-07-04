#include <stdio.h>

void main()
{
	int i,k;

	for (i=0; i<=9; i++){

		for(k=2; k<=9; k++){
			if(i==0){
				printf(" #Á¦%d´Ü# ",k);
				if(k==9)
					printf("\n");
			}
			else{
				printf("%2dX%2d=%2d ",k,i,k*i);
			}

		}
		printf("\n");
	}
}

