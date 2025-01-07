#include<stdio.h>
void doicho(int *a , int *b ){
	int temp =*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=10 ,b=20;
	printf("truoc khi doi la %d %d",a,b);
	doicho(&a ,&b);
	printf("truoc khi doi la %d %d",a,b);

	
	return 0;
}