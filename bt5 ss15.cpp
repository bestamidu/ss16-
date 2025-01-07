#include<stdio.h>
void update(int *decu , int size , int giaTri , int viTrimoi){
	if ( viTrimoi>=0 && viTrimoi <size){
		decu[viTrimoi]=giaTri ;
	}	else{
		printf("vi tri nhap khong phu hop ");
	}
	}
int main(){
	int duci[]={2,5,1,11,6};
	int size = sizeof(duci) / sizeof(int);
	int giaTri , viTrimoi;
	    printf("Nhap vi tri can cap nhat: ");
    scanf("%d", &viTrimoi);

    printf("Nhap gia tri moi: ");
    scanf("%d", &giaTri);

	update(duci , size , giaTri , viTrimoi);
	for (int i =0 ; i<size ; i++){
	printf("%d\n", duci[i]);	
	}
	printf("\n");
	return 0;
}