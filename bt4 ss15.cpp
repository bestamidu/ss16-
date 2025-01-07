#include<stdio.h>
void inmang( int *duce ,int size ){
	for(int i =0 ; i<size ; i++){
		printf ("gia tri cua duce[%d]=%d\n",i,*(duce+i));
	}
	printf("/n");
}
int main(){
	int duci[]={ 5,12,3,55,12,34};
	int size = sizeof(duci) / sizeof(int);
	inmang(&duci,size);
	return 0;
}