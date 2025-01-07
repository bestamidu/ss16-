#include<stdio.h>
int tinhTong(int *a , int *b ){
	int sum =*a + *b;
	return sum;
}
int main(){
	int du=10,ci=20,tong;
    tong =tinhTong(&du,&ci);
    printf("tong la %d",tong);
    return 0;
}