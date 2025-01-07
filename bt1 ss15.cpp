#include<stdio.h>
int main(){
	int duci=10;
	int *ptr =&duci;
	printf("gia tri la %d\n",duci);
		printf("dia chi la %p\n",&duci);
			printf("gia tri la %d\n",*ptr);
				printf("dia tri la %p\n",&ptr);
}